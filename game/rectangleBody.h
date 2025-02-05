#ifndef RECTANGLEBODY_H
#define RECTANGLEBODY_H

#include "Box2D/box2d/box2d.h"

#include <QGraphicsRectItem>


//! \brief This class defines a rectangle body
class RectangleBody : public QObject, public QGraphicsRectItem {

    Q_OBJECT

public:
    //! \brief Constructor
    RectangleBody(b2World *world, QSizeF size, QPointF initPos, qreal angle, bool dynType);

    //! \brief Destructor
    ~RectangleBody();

    //! \brief Pointer to the body
    b2Body* body;

    //! \brief Advances the position and rotation of the body
    virtual void advance(int phase);
};

#endif // RECTANGLEBODY_H
