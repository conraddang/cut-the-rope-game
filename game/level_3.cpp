#include "level_3.h"

level_3::level_3()
{

    // Add Background
    scene->setBackgroundBrush(QBrush(QImage(":/images/images/wood.jpg")));


    // Add Score
    Score* score = new Score("3level_current.txt");
    scene -> addItem(score);


    // Add Ground
    RectangleBody* Ground = new RectangleBody(world, QSizeF(12, 0.5), QPointF(6, 7), 0, false);
    RectangleBody* Ground2 = new RectangleBody(world, QSizeF(2, 0.8), QPointF(5.2, 6.4), 0, false);
    RectangleBody* Ground3 = new RectangleBody(world, QSizeF(0.5, 0.5), QPointF(1.75, 6.50), 0, false);
    RectangleBody* Ground4 = new RectangleBody(world, QSizeF(0.5, 0.5), QPointF(11.25, 6.50), 0, false);

    scene -> addItem(Ground);
    scene -> addItem(Ground2);
    scene -> addItem(Ground3);
    scene -> addItem(Ground4);


    // Add Rope & Spider and connect them
    SpiderThread* st = new SpiderThread(world, QPointF(4, 0.05), 9);
    spiderThreadList.push_back(st);

    SpiderThread* st2 = new SpiderThread(world, QPointF(2,0.05), 9);
    spiderThreadList.push_back(st2);

    SpiderThread* st3 = new SpiderThread(world, QPointF(4, 2), 10);
    spiderThreadList.push_back(st3);

    SpiderThread* st4 = new SpiderThread(world, QPointF(2, 2), 6);
    spiderThreadList.push_back(st4);

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

    Spider* spider = new Spider(world, 0.2, QPointF(3, 0.3));
    scene -> addItem(spider);

    b2RevoluteJointDef revoluteJointDef;
    revoluteJointDef.localAnchorA.Set(0,0.1);
    revoluteJointDef.localAnchorB.Set(0.0,0.0);
    revoluteJointDef.collideConnected = false;

    revoluteJointDef.bodyA = st->spiderThreadSegment[st->spiderThreadSegment.size()-1]->body;
    revoluteJointDef.bodyB = spider->body;
    world->CreateJoint( &revoluteJointDef );

    revoluteJointDef.bodyA = st2->spiderThreadSegment[st2->spiderThreadSegment.size()-1]->body;
    revoluteJointDef.bodyB = spider->body;
    world->CreateJoint( &revoluteJointDef );

    revoluteJointDef.bodyA = st3->spiderThreadSegment[st3->spiderThreadSegment.size()-1]->body;
    revoluteJointDef.bodyB = spider->body;
    world->CreateJoint( &revoluteJointDef );

    revoluteJointDef.bodyA = st4->spiderThreadSegment[st4->spiderThreadSegment.size()-1]->body;
    revoluteJointDef.bodyB = spider->body;
    world->CreateJoint( &revoluteJointDef );


    // Add Web, Flies, Plants and Trampolin

    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(0, 6.12), 0,QPixmap(":/images/images/spikes.png")));
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(2, 6.12), 0,QPixmap(":/images/images/spikes.png")));
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(8, 6.12), 0,QPixmap(":/images/images/spikes.png")));
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(9.5, 6.12), 0,QPixmap(":/images/images/spikes.png")));
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(9.5, 6.12), 0, QPixmap(":/images/images/plant2.png")));


    //body
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(1, 5.42), 0,QPixmap(":/images/images/cabo1.png")));
    //mouth
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(1.25, 4.77), 0, QPixmap(":/images/images/plant2.png")));

    //body
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(10.5, 5.42), 0,QPixmap(":/images/images/cabo1.png")));
    //mouth
    scene->addItem(new Plant(world, QSizeF(0, 0), QPointF(10.75, 4.77), 0, QPixmap(":/images/images/plant2.png")));

    scene -> addItem(new Web(QPointF(7.75, 4)));
    scene -> addItem(new Fly(QPointF(5, 4), score));
    scene -> addItem(new Fly(QPointF(2.75, 3), score));
    scene -> addItem(new Fly(QPointF(7, 4), score));

    scene -> addItem(new Trampolin(world, QSizeF(1, 1), QPoint(5, 6), 0, 150));
    scene -> addItem(new Trampolin(world, QSizeF(1, 1), QPoint(4, 7), 0, 100));
    scene -> addItem(new Trampolin(world, QSizeF(1, 1), QPoint(7, 7), 0, 100));

}

//------------------------------------------


level_3 :: ~level_3()
{


}
