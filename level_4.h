#ifndef LEVEL_4_H
#define LEVEL_4_H
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


//! \brief This class defines Level 4
class level_4 : public LevelBase
{
public:
    //! \brief Constructor
    level_4();

    //! \brief Destructor
    ~level_4();

};

#endif // LEVEL_4_H
