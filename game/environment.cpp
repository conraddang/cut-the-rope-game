#include "environment.h"
#include "ui_environment.h"
#include "plant.h"



#include <Box2D/box2d/box2d.h>
#include <QDebug>
#include <iostream>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include <QGraphicsView>
#include <QGraphicsSceneMouseEvent>

#include <spider.h>
#include <portal.h>
#include <web.h>
#include <fly.h>
#include <trampoline.h>
#include <rectangleBody.h>



Scene::Scene(qreal x, qreal y, qreal width, qreal height, b2World *world, Cutter* cutter)
    : QGraphicsScene(x, y, width, height)

{
    this->world = world;
    this->cutter = cutter;
}

//------------------------------------------

void Scene::advance() {
    world->Step(1.00f/60.00, 6, 2);
    QGraphicsScene::advance();
}

//------------------------------------------

void Scene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    cutter->setPos(event->scenePos().x(), event->scenePos().y());
    addItem(cutter);
}

//------------------------------------------

void Scene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    cutter->setPos(event->scenePos().x(), event->scenePos().y());
}

//------------------------------------------

void Scene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    removeItem(cutter);
}


