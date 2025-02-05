
#ifndef PLANT_H
#define PLANT_H

#include <QWidget>
#include <Box2D/box2d/box2d.h>
#include <QTimer>
#include <QGraphicsPixmapItem>
#include <QObject>
#include "audio.h"


//! \brief This class defines the plant object
class Plant : public QObject, public QGraphicsPixmapItem, public audio {

    Q_OBJECT

public:
    //! \brief Constructor
    Plant(b2World *world, QSizeF size, QPointF initPos, qreal angle, QPixmap image);

    //! \brief Destructor
    ~Plant();


public slots:
    //! \brief Spider will disappear and the game will be over after collison of spider and plant
    void collision();

private:
    //! \brief Pointer to the body
    b2Body* body;

};
#endif // PLANT_H
