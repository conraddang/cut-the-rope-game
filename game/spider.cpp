#include <spider.h>
#include <bubble.h>
#include <trampoline.h>
#include <environment.h>

#include <Box2D/box2d/box2d.h>
#include <QDebug>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QGraphicsView>
#include <QTimer>
#include <QList>
#include <iostream>


qreal fromB2_s(qreal value) {
    return value*SCALE;
}

qreal toB2_s(qreal value) {
    return value/SCALE;
}

Spider :: Spider (b2World *world, QSizeF size, QPointF initPos, qreal angle) {
    setRect(-fromB2_s(size.width()/2), -fromB2_s(size.height()/2), fromB2_s(size.width()), fromB2_s(size.height()));
    setBrush(QBrush(Qt::gray));
    setPos(fromB2_s(initPos.x()), fromB2_s(initPos.y()));
    setRotation(angle);

    b2BodyDef bodyDef;
    bodyDef.type = b2_dynamicBody;
    bodyDef.position.Set(initPos.x(), initPos.y());
    //bodyDef_1.linearDamping = 0.2;
    bodyDef.angle = 3.14*angle/180;

    body = world->CreateBody(&bodyDef);

    //b2PolygonShape shape;
    shape.SetAsBox(size.width()/2, size.height()/2, b2Vec2(20,0), 0);
    body->CreateFixture(&shape, 0.001f);

    QTimer * timer = new QTimer();
    //connect(timer, SIGNAL(timeout()), this, SLOT(ContactSpiderPortal()));
    timer->start(50);
}

Spider :: ~Spider() {
    body -> GetWorld() -> DestroyBody(body);
}

void Spider::advance(int phase)
{
    if(phase) {
        setPos(fromB2_s(body->GetPosition().x), fromB2_s(body->GetPosition().y));
    }
}

void Spider :: ContactSpiderPortal() {
    b2Transform transf_sp = body -> GetTransform();

    std::cout << transf_sp.p.x << std::endl;
    std::cout << transf_sp.p.y << std::endl;

    if(0.7 < transf_sp.p.x) {
        if (transf_sp.p.x < 1.3) {
            if(1.7 < transf_sp.p.y) {
                if(transf_sp.p.y  < 2.3) {
                    body -> SetTransform(b2Vec2(5, 3), 0);
                }
            }
        }
    }
}

void Spider :: ContactTrampoline() {

}
