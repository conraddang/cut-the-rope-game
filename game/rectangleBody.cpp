#include "rectangleBody.h"

#include <QBrush>
#include <QDebug>
#include <QKeyEvent>

RectangleBody::RectangleBody(b2World *world, QSizeF size, QPointF initPos, qreal angle, bool dynType)
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
       setBrush(QBrush(QImage(":/images/images/brown.jpg")));


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

RectangleBody::~RectangleBody()
{
    body->GetWorld()->DestroyBody(body);
}

//------------------------------------------

void RectangleBody::advance(int phase)
{
    if(phase) {
        setPos(body->GetPosition().x*100, body->GetPosition().y*100);
        setRotation(180*(body->GetAngle())/3.14);
    }
}

