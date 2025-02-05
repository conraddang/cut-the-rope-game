#include "plant.h"
#include "environment.h"
#include <spider.h>
#include <gameover.h>


Plant::Plant( b2World *world, QSizeF size, QPointF initPos, qreal angle, QPixmap image)
{

    setPixmap(image);

    setPos( initPos.x()*100 , initPos.y()*100);
    setRotation(angle);

    b2BodyDef bodyDef;
    bodyDef.type = b2_staticBody;
    bodyDef.position.Set(initPos.x(), initPos.y());
    bodyDef.angle = 3.14*angle/180;

    body = world->CreateBody(&bodyDef);

    b2PolygonShape shape;
    shape.SetAsBox(size.width()/2, size.height()/2);

    body->CreateFixture(&shape, 0.0f);

    QTimer *frameTimer = new QTimer();
    connect(frameTimer, SIGNAL(timeout()), this, SLOT(collision()));
    frameTimer->start(1000/60);

}

//------------------------------------------

Plant::~Plant()
{
    body->GetWorld()->DestroyBody(body);
}

//------------------------------------------

 void Plant::collision()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i = 0, n = colliding_items.size(); i < n; i++){
        if (typeid(*(colliding_items[i])) == typeid(Spider)){
           scene()->removeItem(colliding_items[i]);

           delete colliding_items[i];

           gameover *window = new gameover;
           window -> show();

           game_over->setVolume(getSoundVal());
           game_over->play();

           return;

        }
    }
    }
