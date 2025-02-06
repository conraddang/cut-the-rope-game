#ifndef PORTAL_H
#define PORTAL_H

#include <Box2D/box2d/box2d.h>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsEllipseItem>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QObject>
#include <spider.h>
#include "audio.h"


//! \brief Class that defines the first portal (incoming)
class Portal : public QObject, public QGraphicsPixmapItem, public audio {

    Q_OBJECT

public:
    //! \brief Constructor
    Portal(Spider* spider, QPointF posPortal1, QPointF posPortal2, b2World* world, QVector <b2RevoluteJoint*> spiderJoints, bool firstPortal);

    //! \brief Destructor
    ~Portal();


public slots:
    //! \brief After the spider collides with one portal it is moved to the location of the second one
    void spiderTouchesPortal();


private:
    //! \brief Location of first portal
    QPointF posPortal1;

    //! \brief Location of second portal
    QPointF posPortal2;

    //! \brief Pointer to the spider
    Spider* spider;

    //! \brief Timer for public slots
    QTimer* timer;

    //! \brief Pointer to the world
    b2World* world;

    //! \brief Vector made of pointers to the revolute joints
    QVector <b2RevoluteJoint*> spiderJoints;

    //! \brief Distinguishes between first and second portal (true:1, false:2)
    bool firstPortal;
};



//! \brief This class defines the second portal (outgoing)
class Secportal : public QObject, public QGraphicsPixmapItem {

    Q_OBJECT

public:
    //! \brief Constructor
    Secportal(QPointF posPortal2);

    //! \brief Destructor
    ~Secportal();

};

#endif // PORTAL_H
