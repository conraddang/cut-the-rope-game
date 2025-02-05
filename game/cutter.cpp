#include "cutter.h"
#include "spiderThread.h"

#include <QBrush>
#include <QTimer>
#include <QGraphicsScene>

#include <QDebug>

Cutter::Cutter(QVector<SpiderThread*> spiderThreadList)
{
    setRect(-0.05*100, -0.05*100, 0.05*2*100, 0.05*2*100);
    setBrush(QBrush(Qt::white));
    setPos(-25, -25);

    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(cutTheSpiderThread()));
    timer->start(1);

    this->spiderThreadList = spiderThreadList;
}

//------------------------------------------

Cutter::~Cutter()
{

}

//------------------------------------------

void Cutter::cutTheSpiderThread()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i = 0, n = colliding_items.size(); i < n; i++){
        if (typeid(*(colliding_items[i])) == typeid(SpiderThreadBody)){
            cut->setVolume(getSoundVal());
            cut->play();
            scene()->removeItem(colliding_items[i]);
            delete colliding_items[i];
            return;

        }
}
}
