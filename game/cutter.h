#ifndef CUTTER_H
#define CUTTER_H

#include "spiderThread.h"
#include "audio.h"

#include <QGraphicsEllipseItem>
#include <QMediaPlayer>
#include <QMediaPlaylist>

//! \brief This class defines the cutter object. Once you are in the game UI and move the mouse over the thread, the cutter will cut it appropriately
class Cutter : public QObject, public QGraphicsEllipseItem, public audio {

    Q_OBJECT

public:
    //! \brief Constructor
    Cutter(QVector <SpiderThread*> spiderThreadList);

    //! \brief Destructor
    ~Cutter();


public slots:
    //! \brief Threads will be cut at the point of collision of cutter and threads
    void cutTheSpiderThread();


private:
    //! \brief QVector for the Spider Thread
    QVector <SpiderThread*> spiderThreadList;

};

#endif // CUTTER_H
