#ifndef WEB_H
#define WEB_H

#include <Box2D/box2d/box2d.h>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QObject>
#include <spider.h>

#define SCALE 100

//! \brief Class that defines the safety web the spider needs to land in to win
class Web : public QObject, public QGraphicsPixmapItem {

    Q_OBJECT

public:
    //! \brief Constructor
    Web(QPointF initPos);

    //! \brief Destructor
    ~Web();

};

#endif // WEB_H
