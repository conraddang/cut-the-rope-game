#include "fly.h"
#include "spider.h"
#include "environment.h"
#include "score.h"
#include <QTimer>
#include <QDebug>
#include <QGraphicsScene>
#include <QList>

Fly::Fly(QPointF initPos, Score* score)
{
    this -> score = score;
    setPixmap(QPixmap(":/images/images/fly.png"));

    setPos(initPos.x()*100, initPos.y()*100);

    QTimer * flyTimer = new QTimer();
    connect(flyTimer, SIGNAL(timeout()), this, SLOT(caughtBySpider()));

    flyTimer->start(50);
}

//------------------------------------------

void Fly::caughtBySpider()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i = 0, n = colliding_items.size(); i < n; i++){
        if (typeid(*(colliding_items[i])) == typeid(Spider)){
            fly->setVolume(getSoundVal());
            fly->play();
            scene()->removeItem(this);
            score->incrementStars();
            delete this;

            return;
        }
    }
}
