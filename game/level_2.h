#ifndef LEVEL_2_H
#define LEVEL_2_H
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


//! \brief This class defines Level 2
class level_2 : public LevelBase
{
public:
    //! \brief Constructor
    level_2();

    //! \brief Destructor
    ~level_2();

};

#endif // LEVEL_2_H
