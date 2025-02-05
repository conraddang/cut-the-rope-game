#ifndef SPIDER_H
#define SPIDER_H

#include <Box2D/box2d/box2d.h>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsEllipseItem>
#include <QTimer>
#include <QObject>
#include <bubble.h>

class Spider : public QObject, public QGraphicsEllipseItem {

    Q_OBJECT

public:
    Spider(b2World *world, QSizeF size, QPointF initPos, qreal angle);
    ~Spider();
    void LoadSpider();
    void LoadFancySpider();
    void ContactTrampoline();
    virtual void advance(int phase);

public slots:
    void ContactSpiderPortal();

private:
    b2Body* body;
    b2PolygonShape shape;
    QTimer* timer;
};

#endif // SPIDER_H
