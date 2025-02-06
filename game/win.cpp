#include <levelwindow.h>
#include "win.h"
#include "ui_win.h"
#include <environment.h>
#include <startwindow.h>

win::win(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::win)
{
    ui->setupUi(this);


}

//------------------------------------------

win::~win()
{
    delete ui;
}

//------------------------------------------

void win::on_LevelButton_clicked() {
    button->play();

    this -> destroy();

    levelwindow = new class LevelWindow();
    levelwindow -> show();
}

//------------------------------------------

void win::on_MenuButton_clicked()
{
    button->play();

    this -> destroy();

    StartWindow *startwindow = new StartWindow;
    startwindow -> show();
}
