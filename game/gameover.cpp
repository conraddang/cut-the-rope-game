#include <levelwindow.h>
#include "gameover.h"
#include "ui_gameover.h"
#include <levelbase.h>
#include <environment.h>
#include <startwindow.h>

gameover::gameover(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gameover)
{
    ui->setupUi(this);

}

//------------------------------------------

gameover::~gameover()
{
    delete ui;
}

//------------------------------------------

void gameover::on_LevelButton_clicked()
{
    button->play();
    this -> destroy();

    levelwindow = new class LevelWindow();
    levelwindow -> show();
}

//------------------------------------------

void gameover::on_MenuButton_clicked()
{
    button->play();

    this -> destroy();

    StartWindow *startwindow = new StartWindow;
    startwindow -> show();
}
