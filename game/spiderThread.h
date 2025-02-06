#ifndef SPIDERTHREAD_H
#define SPIDERTHREAD_H

#include "Box2D/box2d/box2d.h"
#include "rectangleBody.h"

#include <QGraphicsRectItem>
#include <QVector>


//! \brief This class defines each spiderthread segment to create the spider thread
class SpiderThreadBody : public QObject, public QGraphicsRectItem {

    Q_OBJECT

public:
    //! \brief Constructor
    SpiderThreadBody(b2World *world, QSizeF size, QPointF initPos, qreal angle, bool dynType);

    //! \brief Destructor
    ~SpiderThreadBody();


public:
    //! \brief Pointer to the body
    b2Body* body;


public:
    //! \brief Advance position and rotation of the body
    virtual void advance(int phase);
};


//! \brief This class defines the spider Thread as a whole and creates the spiderThread by using spiderthread segments
class SpiderThread : public QObject, public QGraphicsRectItem {

    Q_OBJECT

    public:
        //! \brief Constructor
        SpiderThread(b2World *world, QPointF anchorPoint, qint8 length);


    public:
        //! \brief Pointer to the QVector Spider Thread Body
        QVector <SpiderThreadBody*> spiderThreadSegment;


};


#endif // SPIDERTHREAD_H
