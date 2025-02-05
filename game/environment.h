#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QTimer>
#include <Box2D/box2d/box2d.h>
#include "cutter.h"
#include <plant.h>
#include <fly.h>
#include <spiderThread.h>

#define SCALE 100

QT_BEGIN_NAMESPACE
namespace Ui { class Environment; }
QT_END_NAMESPACE

//! \brief Class defines the main scene
class Scene : public QGraphicsScene {

    Q_OBJECT

public:
    //! \brief Constructor
    Scene(qreal x, qreal y, qreal width, qreal height, b2World *world, Cutter *cutter);


public slots:
    //! \brief Define steps for the world
    void advance();


private:
    //! \brief Pointer to the world
    b2World* world;

    //! \brief Pointer to the cutter
    Cutter *cutter;


protected:
    //! \brief Cutter is added to the scene once the mouse is pressed
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;

    //! \brief Cutter position is changed according to the mouse movement
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;

    //! \brief Cutter is deleted once the mouse is released
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event)override;
};




#endif // ENVIRONMENT_H
