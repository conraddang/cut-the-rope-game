#ifndef SPIDER_H
#define SPIDER_H

#include <Box2D/box2d/box2d.h>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsEllipseItem>
#include <QTimer>
#include <QObject>
#include "audio.h"

#include <fstream>
#include <string>

using namespace std;

//! \brief This class defines the spider and its actions
class Spider : public QObject, public QGraphicsEllipseItem, public audio {

    Q_OBJECT

public:
    //! \brief Constructor
    Spider(b2World *world, qreal radius, QPointF initPos);

    //! \brief Destructor
    ~Spider();

    //! \brief Get spider x and y position
    void advance(int phase);

    //! \brief Pointer to spider body
    b2Body* body;


public slots:
    //! \brief Spider will disappear and win UI will appear after collision of spider and web
    void ContactSpiderWeb();

    //! \brief Spider will disappear and gamover UI will appear after spider leaves the boundaries
    void OutOfBoundaries();

    //! \brief Sounds will be played after the Spider collides with the trampoline
    void collision_tram();

    //! \brief Will update the final scores in the text files
    void FinalScore(string level, string currentResult);


private:
    //! \brief Pointer to spider shape
    b2PolygonShape shape;

    //! \brief Timer for collision events
    QTimer* timer;

    //! \brief Pointer to m_scene
    QGraphicsScene *m_scene;
};

#endif // SPIDER_H
