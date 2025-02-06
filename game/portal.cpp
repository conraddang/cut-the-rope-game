#include <portal.h>
#include <spider.h>

#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QGraphicsView>
#include <QList>
#include <QTimer>
#include <Box2D/box2d/box2d.h>
#include "iostream"




//------------------------------------------

Portal :: Portal (Spider* spider, QPointF posPortal1, QPointF posPortal2, b2World* world, QVector <b2RevoluteJoint*> spiderJoints, bool firstPortal) {

    this->world = world;
    this->spider = spider;
    this->spiderJoints = spiderJoints;
    this->posPortal1 = posPortal1;
    this->posPortal2 = posPortal2;
    this->firstPortal = firstPortal;


    setPixmap(QPixmap(":/images/images/hat_bl.png"));
    setTransformOriginPoint(50, 50);
    setRotation(180);
    setPos(posPortal1.x()*100, posPortal1.y()*100);

    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(spiderTouchesPortal()));
    timer->start(50);
}

//------------------------------------------

Portal :: ~Portal() {

}

//------------------------------------------

void Portal::spiderTouchesPortal()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i = 0, n = colliding_items.size(); i < n; i++){
        if (typeid(*(colliding_items[i])) == typeid(Spider)){

            portal_->setVolume(getSoundVal());
            portal_->play();

            if(firstPortal)
            {
                    for(int i = 0; i < spiderJoints.size(); i++)
                    {
                        world->DestroyJoint(spiderJoints[i]);
                    }
            }

            spider->body->SetTransform(b2Vec2(posPortal2.x()+0.5, posPortal2.y()+0.25), 0);

            return;
        }
    }
}


//------------------------------------------

Secportal :: Secportal(QPointF posPortal2) {


    setPixmap(QPixmap(":/images/images/hat_prpl.png"));
    setTransformOriginPoint(50, 50);
    setRotation(0);
    setPos(posPortal2.x()*100, posPortal2.y()*100);


}

//------------------------------------------

Secportal :: ~Secportal() {

}

//------------------------------------------




