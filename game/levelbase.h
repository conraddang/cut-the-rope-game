#ifndef LEVELBASE_H
#define LEVELBASE_H

#include <QWidget>
#include <QMediaPlayer>
#include <environment.h>
#include <cutter.h>
#include "audio.h"
#include <score.h>

namespace Ui {
class LevelBase;
}

//! \brief This class is the basic construct all levels build on
class LevelBase : public QWidget, public audio

{
    Q_OBJECT

public:
    //! \brief Constructor
    explicit LevelBase(QWidget *parent = nullptr);

    //! \brief Destructor
    ~LevelBase();

    //! \brief QVector for Spider Threads
    QVector <SpiderThread*> spiderThreadList;

    //! \brief Pointer to the world
    b2World *world;

    //! \brief Pointer to the scene
    Scene *scene;

    //! \brief Pointer to the score
    Score* score;

    //! \brief Vector made of pointers to the revolute joints
    QVector <b2RevoluteJoint*> spiderJoints;


private slots:
    //! \brief Menu is loaded once the Back Button is clicked
    void on_BackButton_clicked();


private:
    //! \brief Pointer to the LevelBase UI
    Ui::LevelBase *ui;

    //! \brief Pointer to the Cutter
    Cutter *cutter;

    //! \brief Timer which advances the scene
    QTimer* frameTimer;

};

#endif // LEVELBASE_H
