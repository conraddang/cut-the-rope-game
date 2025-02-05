#include "spiderThread.h"
#include "environment.h"

#include <QVector>
#include <QTimer>
#include <QDebug>
#include <QGraphicsScene>
#include <QBrush>
#include <QKeyEvent>

SpiderThread::SpiderThread(b2World *world, QPointF anchorPoint, qint8 length)
{
    b2RevoluteJointDef revoluteJointDef;
    revoluteJointDef.localAnchorA.Set(0,0.1);
    revoluteJointDef.localAnchorB.Set(0.0,-0.1);
    revoluteJointDef.collideConnected = false;

    SpiderThreadBody* spiderThreadBody = new SpiderThreadBody(world, QSizeF(0.1, 0.1), QPointF(anchorPoint.x(), anchorPoint.y()), 0, false);
    spiderThreadSegment.push_back(spiderThreadBody);



    for(int i = 0; i < length; i ++){
        SpiderThreadBody* spiderThreadBody = new SpiderThreadBody(world, QSizeF(0.1, 0.2), QPointF(anchorPoint.x(), anchorPoint.y()+0.1*i), 0, true);
        spiderThreadSegment.push_back(spiderThreadBody);

        revoluteJointDef.bodyA = spiderThreadSegment[i]->body;
        revoluteJointDef.bodyB = spiderThreadSegment[i+1]->body;
        world->CreateJoint( &revoluteJointDef );
    }


}

//------------------------------------------

SpiderThreadBody::SpiderThreadBody(b2World *world, QSizeF size, QPointF initPos, qreal angle, bool dynType)
{


    if(dynType)
    {
        setRect(-(size.width()/2)*100, (-size.height()/2)*100, (size.width())*100, (size.height())*100);
        setBrush(QBrush(Qt::white));
        setPos((initPos.x())*100, (initPos.y())*100);
        setRotation(angle);

        b2BodyDef bodyDef;
        bodyDef.type = b2_dynamicBody;
        bodyDef.position.Set(initPos.x(), initPos.y());
        bodyDef.angle = 3.14*angle/180;

        body = world->CreateBody(&bodyDef);

        b2PolygonShape shape;
        shape.SetAsBox(size.width()/2, size.height()/2);

        b2FixtureDef boxFixtureDef;
        boxFixtureDef.shape = &shape;
        boxFixtureDef.density = 0.6f;
        body->CreateFixture(&boxFixtureDef);

    }

    else
    {
        setRect(-(size.width()/2)*100, (-size.height()/2)*100, (size.width())*100, (size.height())*100);

        setBrush(QBrush(Qt::white));

        setPos((initPos.x())*100, (initPos.y())*100);
        setRotation(angle);

        b2BodyDef bodyDef;
        bodyDef.type = b2_staticBody;
        bodyDef.position.Set(initPos.x(), initPos.y());
        bodyDef.angle = 3.14*angle/180;

        body = world->CreateBody(&bodyDef);

        b2PolygonShape shape;
        shape.SetAsBox(size.width()/2, size.height()/2);

        body->CreateFixture(&shape, 0.0f);
    }

}

//------------------------------------------

SpiderThreadBody::~SpiderThreadBody()
{
    body->GetWorld()->DestroyBody(body);
}

//------------------------------------------

void SpiderThreadBody::advance(int phase)
{
    if(phase) {
        setPos(body->GetPosition().x*100, body->GetPosition().y*100);
        setRotation(180*(body->GetAngle())/3.14);
    }
}



