#include "level_1.h"
#include <spiderThread.h>

level_1::level_1()
{

    // Add Background
    scene->setBackgroundBrush(QBrush(QImage(":/images/images/wood.jpg")));


    // Add Score
    Score* score = new Score("1level_current.txt");
    scene -> addItem(score);


    // Add Ground
    RectangleBody* Ground = new RectangleBody(world, QSizeF(12, 0.1), QPointF(6, 7), 0, false);
    scene -> addItem(Ground);


    // Add Rope & Spider and connect them
    SpiderThread* st = new SpiderThread(world, QPointF(6.5, 0.1), 10);
    spiderThreadList.push_back(st);

    for(int i = 0; i < st->spiderThreadSegment.size(); i ++){
        scene->addItem(st->spiderThreadSegment[i]);
    }

    Spider* spider = new Spider(world, 0.2, QPointF(6.5, 2));
    scene -> addItem(spider);

    b2RevoluteJointDef revoluteJointDef;
    revoluteJointDef.localAnchorA.Set(0,0.1);
    revoluteJointDef.localAnchorB.Set(0.0,0.0);
    revoluteJointDef.collideConnected = false;

    revoluteJointDef.bodyA = st->spiderThreadSegment[st->spiderThreadSegment.size()-1]->body;
    revoluteJointDef.bodyB = spider->body;
    world->CreateJoint( &revoluteJointDef );


    // Add Web, Flies and Plants
    scene -> addItem(new Web(QPointF(5.5, 6)));
    scene -> addItem(new Fly(QPointF(6.25, 3), score));
    scene -> addItem(new Fly(QPointF(6.25, 4), score));
    scene -> addItem(new Fly(QPointF(6.25, 5), score));

    // Add plant1(body)
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(10.5, 4.10), 0,QPixmap(":/images/images/plant3.png")));
    // Add plant1(head)
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(10.8, 3.42), 0, QPixmap(":/images/images/plant2.png")));

    // Add plant2(body)
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(8.5, 4.10), 0,QPixmap(":/images/images/plant3.png")));
    // Add plant2(head)
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(8.8, 3.42), 0, QPixmap(":/images/images/plant2.png")));

    // Add plant3(body)
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(4, 4.10), 0,QPixmap(":/images/images/plant3.png")));
    // Add plant3(head)
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(4.30, 3.42), 0, QPixmap(":/images/images/plant2.png")));

    // Add plant4(body)
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(2, 4.10), 0,QPixmap(":/images/images/plant3.png")));
    // Add plant4(head)
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(2.30, 3.42), 0, QPixmap(":/images/images/plant2.png")));

    // Add plant5(body)
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(0, 4.10), 0,QPixmap(":/images/images/plant3.png")));
    // Add plant5(head)
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(0.30, 3.42), 0, QPixmap(":/images/images/plant2.png")));

}

//------------------------------------------

level_1 :: ~level_1()
{

}
