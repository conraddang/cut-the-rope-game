#ifndef FLY_H
#define FLY_H

#include <QGraphicsPixmapItem>
#include <QGraphicsEllipseItem>
#include <QObject>
#include "audio.h"
#include "score.h"


//! \brief This class defines the fly
class Fly: public QObject, public QGraphicsPixmapItem, public audio{

    Q_OBJECT // so that Bullet can handle signals and slot

public:
    //! \brief Constructor
    Fly(QPointF initPos, Score* score);
    Score* score;


public slots:
    //! \brief The fly will disappear after a collision of spider and fly,
    void caughtBySpider();


};

#endif // FLY_H
