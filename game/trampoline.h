#ifndef TRAMPOLINE_H
#define TRAMPOLINE_H

#include <QWidget>
#include <Box2D/box2d/box2d.h>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QTimer>

#include "audio.h"


//! \brief This class defines the trampolin
class Trampolin : public QObject, public QGraphicsPixmapItem, public audio {

        Q_OBJECT

public:
    //! \brief Constructor
    Trampolin(b2World *world, QSizeF size, QPointF initPos, qreal angle, int imSize);

    //! \brief Destructor
    ~Trampolin();


private:
    //! \brief Pointer to the body
    b2Body* body;

};



#endif // TRAMPOLINE_H
