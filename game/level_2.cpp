#include "level_2.h"

level_2::level_2()
{

    // Add Background
    scene->setBackgroundBrush(QBrush(QImage(":/images/images/wood.jpg")));


    // Add Score
    Score* score = new Score("2level_current.txt");
    scene -> addItem(score);


    // Add Ground
    RectangleBody* Ground = new RectangleBody(world, QSizeF(12, 0.1), QPointF(6, 7), 0, false);
    scene -> addItem(Ground);


    // Add Rope & Spider and connect them
    SpiderThread* st = new SpiderThread(world, QPointF(1, 0.05), 6);
    spiderThreadList.push_back(st);

    SpiderThread* st2 = new SpiderThread(world, QPointF(4, 0.05), 16);
    spiderThreadList.push_back(st2);

    for(int i = 0; i < st->spiderThreadSegment.size(); i ++){
       scene->addItem(st->spiderThreadSegment[i]);
    }
    for(int i = 0; i < st2->spiderThreadSegment.size(); i ++){
       scene->addItem(st2->spiderThreadSegment[i]);
    }

    Spider* spider = new Spider(world, 0.2, QPointF(1, 0.35));
    scene -> addItem(spider);

    b2RevoluteJointDef revoluteJointDef;
    revoluteJointDef.localAnchorA.Set(0,0.1);
    revoluteJointDef.localAnchorB.Set(0.0,0.0);
    revoluteJointDef.collideConnected = false;

    revoluteJointDef.bodyA = st->spiderThreadSegment[st->spiderThreadSegment.size()-1]->body;
    revoluteJointDef.bodyB = spider->body;
    spiderJoints.push_back((b2RevoluteJoint*)world->CreateJoint(&revoluteJointDef));


    revoluteJointDef.bodyA = st2->spiderThreadSegment[st2->spiderThreadSegment.size()-1]->body;
    revoluteJointDef.bodyB = spider->body;
    spiderJoints.push_back((b2RevoluteJoint*)world->CreateJoint(&revoluteJointDef));


    // Add Web, Flies, Plants and Portals
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(1.4, 6.12), 0,QPixmap(":/images/images/spikes.png")));
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(4, 6.12), 0,QPixmap(":/images/images/spikes.png")));
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(9.5, 6.12), 0,QPixmap(":/images/images/spikes.png")));
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(0, 6.12), 0,QPixmap(":/images/images/spikes.png")));
    //body
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(3.5, 6.12), 0,QPixmap(":/images/images/cabo1.png")));
    //mouth
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(3.75, 5.5), 0, QPixmap(":/images/images/plant2.png")));

    //body
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(0, 6.12), 0,QPixmap(":/images/images/cabo1.png")));
    //mouth
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(0.25, 5.5), 0, QPixmap(":/images/images/plant2.png")));

    //body
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(10.5, 6.12), 0,QPixmap(":/images/images/cabo1.png")));
    //mouth
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(10.75, 5.5), 0, QPixmap(":/images/images/plant2.png")));


    scene -> addItem(new Portal(spider, QPointF(0.8,3), QPointF(7.5,1.5), world, spiderJoints, 1));
    scene -> addItem(new Secportal(QPointF(7.5,1.5)));

    scene -> addItem(new Web(QPointF(7.5, 5.5)));
    scene -> addItem(new Fly(QPointF(5.5, 2.5), score));
    scene -> addItem(new Fly(QPointF(2.5, 3), score));
    scene -> addItem(new Fly(QPointF(8, 4), score));

}

//------------------------------------------

level_2 :: ~level_2()
{

}
