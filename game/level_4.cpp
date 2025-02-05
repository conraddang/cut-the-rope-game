#include "level_4.h"

level_4::level_4()
{

    // Add Background
    scene->setBackgroundBrush(QBrush(QImage(":/images/images/wood.jpg")));


    // Add Score
    Score* score = new Score("4level_current.txt");
    scene -> addItem(score);

    // Add Ground
    RectangleBody* Ground = new RectangleBody(world, QSizeF(0.1, 2.2), QPointF(2.7, 3), 45, false);
    RectangleBody* Ground1 = new RectangleBody(world, QSizeF(0.1, 2.2), QPointF(1.25, 2.75), 45, false);
    RectangleBody* Ground2 = new RectangleBody(world, QSizeF(0.1, 2.4), QPointF(1.3, 4.3), 135, false);
    RectangleBody* Ground3 = new RectangleBody(world, QSizeF(0.1, 2.2), QPointF(9, 3), 135, false);
    RectangleBody* Ground4 = new RectangleBody(world, QSizeF(0.1, 2.2), QPointF(10.35, 2.75), 135, false);
    RectangleBody* Ground5 = new RectangleBody(world, QSizeF(0.1, 2.4), QPointF(10.3, 4.3), 45, false);

    RectangleBody* Ground6 = new RectangleBody(world, QSizeF(0.1, 1.6), QPointF(2.55, 4.35), 135, false);
    RectangleBody* Ground7 = new RectangleBody(world, QSizeF(0.1, 1.6), QPointF(9.15, 4.35), 45, false);

    RectangleBody* Ground8 = new RectangleBody(world, QSizeF(12, 0.1), QPointF(6, 7), 0, false);

    scene -> addItem(Ground);
    scene -> addItem(Ground1);
    scene -> addItem(Ground2);
    scene -> addItem(Ground3);
    scene -> addItem(Ground4);
    scene -> addItem(Ground5);
    scene -> addItem(Ground6);
    scene -> addItem(Ground7);
    scene -> addItem(Ground8);


    // Add Rope & Spider and connect them
    SpiderThread* st = new SpiderThread(world, QPointF(6.8, 0.1), 8);
    spiderThreadList.push_back(st);

    SpiderThread* st2 = new SpiderThread(world, QPointF(5.2, 0.1), 8);
    spiderThreadList.push_back(st2);

    SpiderThread* st3 = new SpiderThread(world, QPointF(3.5, 0.5), 11);
    spiderThreadList.push_back(st3);

    SpiderThread* st4 = new SpiderThread(world, QPointF(8.5, 0.5), 11);
    spiderThreadList.push_back(st4);

    SpiderThread* st5 = new SpiderThread(world, QPointF(7, 2.5), 6);
    spiderThreadList.push_back(st5);

    SpiderThread* st6 = new SpiderThread(world, QPointF(5, 2.5), 6);
    spiderThreadList.push_back(st6);

    for(int i = 0; i < st->spiderThreadSegment.size(); i ++){
       scene->addItem(st->spiderThreadSegment[i]);
    }
    for(int i = 0; i < st2->spiderThreadSegment.size(); i ++){
       scene->addItem(st2->spiderThreadSegment[i]);
    }

    for(int i = 0; i < st3->spiderThreadSegment.size(); i ++){
       scene->addItem(st3->spiderThreadSegment[i]);
    }
    for(int i = 0; i < st4->spiderThreadSegment.size(); i ++){
       scene->addItem(st4->spiderThreadSegment[i]);
    }

    for(int i = 0; i < st5->spiderThreadSegment.size(); i ++){
       scene->addItem(st5->spiderThreadSegment[i]);
    }
    for(int i = 0; i < st6->spiderThreadSegment.size(); i ++){
       scene->addItem(st6->spiderThreadSegment[i]);
    }

    Spider* spider = new Spider(world, 0.2, QPointF(6.5, 1.7));
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

    revoluteJointDef.bodyA = st3->spiderThreadSegment[st3->spiderThreadSegment.size()-1]->body;
    revoluteJointDef.bodyB = spider->body;
    spiderJoints.push_back((b2RevoluteJoint*)world->CreateJoint(&revoluteJointDef));

    revoluteJointDef.bodyA = st4->spiderThreadSegment[st4->spiderThreadSegment.size()-1]->body;
    revoluteJointDef.bodyB = spider->body;
    spiderJoints.push_back((b2RevoluteJoint*)world->CreateJoint(&revoluteJointDef));

    revoluteJointDef.bodyA = st5->spiderThreadSegment[st5->spiderThreadSegment.size()-1]->body;
    revoluteJointDef.bodyB = spider->body;
    spiderJoints.push_back((b2RevoluteJoint*)world->CreateJoint(&revoluteJointDef));

    revoluteJointDef.bodyA = st6->spiderThreadSegment[st6->spiderThreadSegment.size()-1]->body;
    revoluteJointDef.bodyB = spider->body;
    spiderJoints.push_back((b2RevoluteJoint*)world->CreateJoint(&revoluteJointDef));


    // Add Web, Flies, Plants and Portals

    scene -> addItem(new Portal(spider, QPointF(8.4,5), QPointF(2.2,1.4), world, spiderJoints, 1));
    scene -> addItem(new Secportal(QPointF(2.2,1.4)));

    scene -> addItem(new Portal(spider, QPointF(2.2,5), QPointF(5.2,0.5), world, spiderJoints, 0));
    scene -> addItem(new Secportal(QPointF(5.2, 0.5)));

    scene -> addItem(new Fly(QPointF(1.25 , 3.5), score));
    scene -> addItem(new Fly(QPointF(10 , 3.5), score));
    scene -> addItem(new Fly(QPointF(6 , 3.5), score));
    scene -> addItem(new Web(QPointF(5.5, 6)));

    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(10.5, 6.5), 0, QPixmap(":/images/images/plant2.png")));

    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(8.5, 6.5), 0, QPixmap(":/images/images/plant2.png")));

    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(7.5, 6.5), 0, QPixmap(":/images/images/plant2.png")));

    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(4.5, 6.5), 0, QPixmap(":/images/images/plant2.png")));

    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(3.5, 6.5), 0, QPixmap(":/images/images/plant2.png")));

    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(0.5, 6.5), 0, QPixmap(":/images/images/plant2.png")));

}

//------------------------------------------

level_4 :: ~level_4()
{

}
