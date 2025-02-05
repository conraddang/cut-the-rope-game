#include "level_5.h"
#include "fly.h"

level_5::level_5()
{

    // Add Background
    scene->setBackgroundBrush(QBrush(QImage(":/images/images/wood.jpg")));


    // Add Score
    Score* score = new Score("5level_current.txt");
    scene -> addItem(score);


    // Add Ground
    RectangleBody* Ground = new RectangleBody(world, QSizeF(12, 1), QPointF(6, 6.5), 0, false);
    scene -> addItem(Ground);


    // Add Rope & Spider and connect them
    SpiderThread* st = new SpiderThread(world, QPointF(9, 0.4), 11);
    spiderThreadList.push_back(st);

    SpiderThread* st2 = new SpiderThread(world, QPointF(6, 0.4), 10);
    spiderThreadList.push_back(st2);

    SpiderThread* st3 = new SpiderThread(world, QPointF(8.9, 3), 8);
    spiderThreadList.push_back(st3);

    SpiderThread* st4 = new SpiderThread(world, QPointF(6, 2.7), 7);
    spiderThreadList.push_back(st4);

    SpiderThread* st5 = new SpiderThread(world, QPointF(5.5, 1.0), 8);
    spiderThreadList.push_back(st5);

    SpiderThread* st6 = new SpiderThread(world, QPointF(7, 0.6), 7);
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

   Spider* spider = new Spider(world, 0.2, QPointF(6.2, 2.7));
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


   // Add Web, Flies, Plants, Trampolin and Portals
   //body
   scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(7, 5.65), 0,QPixmap(":/images/images/cabo1.png")));
   //mouth
   scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(7.25, 5), 0, QPixmap(":/images/images/plant2.png")));

   //body
   scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(6, 5.65), 0,QPixmap(":/images/images/cabo1.png")));
   //mouth
   scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(6.25, 5), 0, QPixmap(":/images/images/plant2.png")));

   //body
   scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(0, 5.65), 0,QPixmap(":/images/images/cabo1.png")));
   //mouth
   scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(0.25, 5), 0, QPixmap(":/images/images/plant2.png")));

   //body
   scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(8, 5.65), 0,QPixmap(":/images/images/cabo1.png")));
   //mouth
   scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(8.25, 5), 0, QPixmap(":/images/images/plant2.png")));

   //body
   scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(9, 5.65), 0,QPixmap(":/images/images/cabo1.png")));
   //mouth
   scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(9.25, 5), 0, QPixmap(":/images/images/plant2.png")));

   //body
   scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(10, 5.65), 0,QPixmap(":/images/images/cabo1.png")));
   //mouth
   scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(10.25, 5), 0, QPixmap(":/images/images/plant2.png")));

   //body
   scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(11, 5.65), 0,QPixmap(":/images/images/cabo1.png")));
   //mouth
   scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(11.25, 5), 0, QPixmap(":/images/images/plant2.png")));

   scene -> addItem(new Web(QPointF(1, 4)));
   scene -> addItem(new Fly(QPointF(2.0, 2), score));
   scene -> addItem(new Fly(QPointF(2.0, 2.5), score));
   scene -> addItem(new Fly(QPointF(2.0, 3), score));


   scene -> addItem(new Portal(spider, QPointF(10,3), QPointF(1.8,1), world, spiderJoints, 1));
   scene -> addItem(new Secportal(QPointF(1.7,1)));

   scene -> addItem(new Trampolin(world, QSizeF(1, 1), QPoint(6, 6), 0, 120));
   scene -> addItem(new Trampolin(world, QSizeF(1, 1), QPoint(5, 6), 0, 120));
   scene -> addItem(new Trampolin(world, QSizeF(1, 1), QPoint(4, 6), 0, 120));
   scene -> addItem(new Trampolin(world, QSizeF(1, 1), QPoint(3, 6), 0, 120));

}

//------------------------------------------

level_5 :: ~level_5()
{

}
