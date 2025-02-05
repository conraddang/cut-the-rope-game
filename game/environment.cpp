#include "environment.h"
#include "ui_environment.h"

#include <Box2D/box2d/box2d.h>
#include <QDebug>
#include <iostream>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include <QGraphicsView>
#include <QGraphicsSceneMouseEvent>

#include <spider.h>
#include <bubble.h>
#include <portal.h>
#include <secportal.h>

qreal fromB2(qreal value) {
    return value*SCALE;
}

qreal toB2(qreal value) {
    return value/SCALE;
}

Environment::Environment(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Environment)
{
    ui->setupUi(this);

    world = new b2World(b2Vec2(0.00f, 10.00f));
    scene = new Scene(0, 0, 8, 6, world);

    QGraphicsView * view = new QGraphicsView(scene);

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
    view->setFixedSize(800,600);
    scene->setSceneRect(0, 0, 800, 600);

    scene -> addItem(new Spider(world, QSizeF(1, 1.2), QPointF(1, 0), 0));

    frameTimer = new QTimer(this);
    connect(frameTimer, SIGNAL(timeout()), scene, SLOT(advance()));
    frameTimer->start(1000/60);
}

Environment::~Environment()
{
    delete ui;
}

Scene::Scene(qreal x, qreal y, qreal width, qreal height, b2World *world)
    : QGraphicsScene(fromB2(x), fromB2(y), fromB2(width), fromB2(height))
{
    this->world = world;
}

void Scene::advance() {
    world->Step(1.00f/60.00, 6, 2);
    QGraphicsScene::advance();
}

void Scene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

}
