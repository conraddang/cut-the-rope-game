#ifndef LEVEL_5_H
#define LEVEL_5_H
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

#include "level_1.h"


//! \brief This class defines Level 5
class level_5 : public LevelBase
{
public:
    //! \brief Constructor
    level_5();

    //! \brief Destructor
    ~level_5();

};

#endif // LEVEL_5_H
