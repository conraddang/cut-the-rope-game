#ifndef LEVEL_3_H
#define LEVEL_3_H
#include <levelbase.h>
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QTimer>
#include <QMediaPlayer>
#include <Box2D/box2d/box2d.h>

#include "fly.h"
#include "spiderThread.h"
#include "cutter.h"
#include <spider.h>

#include <portal.h>
#include <web.h>
#include <fly.h>
#include <trampoline.h>
#include <rectangleBody.h>


//! \brief This class defines Level 3
class level_3 : public LevelBase
{
public:
    //! \brief Constructor
    level_3();

    //! \brief Destructor
    ~level_3();

};

#endif // LEVEL_3_H
