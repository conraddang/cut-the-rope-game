#include "levelbase.h"
#include "ui_levelbase.h"
#include <startwindow.h>


LevelBase::LevelBase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LevelBase)
{

    ui->setupUi(this);

    const int width = 1200;
    const int height = 1200;

    ui -> graphicsView -> setFixedSize(width, height);
    ui -> graphicsView -> setSceneRect(0, 0, width, height);
    ui -> graphicsView -> setFrameStyle(0);

    world = new b2World(b2Vec2(0.00f, 10.00f));
    cutter = new Cutter(spiderThreadList);
    scene = new Scene(0, 0, 8, 6, world, cutter);

    scene -> setSceneRect(0, 0, 1200, 1000);

    ui -> graphicsView -> setScene(scene);

    frameTimer = new QTimer(this);
    connect(frameTimer, SIGNAL(timeout()), scene, SLOT(advance()));
    frameTimer->start(1000/60);

}

//------------------------------------------

LevelBase::~LevelBase()
{
    delete ui;
}

//------------------------------------------

void LevelBase::on_BackButton_clicked()
{
    button->play();
    this -> destroy();

    StartWindow *startwindow = new StartWindow;
    startwindow -> show();
}
