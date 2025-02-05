#include "settingwindow.h"
#include "ui_settingwindow.h"
#include <startwindow.h>
#include <iostream>
#include <QTextEdit>
#include <QString>

using namespace std;

SettingWindow::SettingWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SettingWindow)
{
    ui->setupUi(this);
    ui->musicnummer->setText(QString::number(getMusicVal()));
    ui->soundnummer->setText(QString::number(getSoundVal()));
    ui->sliderMusic->setSliderPosition(getMusicVal());
    ui->sliderSound->setSliderPosition(getSoundVal());
}

//------------------------------------------

SettingWindow::~SettingWindow()
{
    delete ui;
}

//------------------------------------------

void SettingWindow::on_BackButton_clicked()
{
    button->play();
    this -> destroy();

    StartWindow *startwindow = new StartWindow;
    startwindow -> show();
}

//------------------------------------------

void SettingWindow::on_sliderMusic_sliderMoved(int position)
{
    ui->musicnummer->setText(QString::number(position));
    setMusicVal(position);
}

//------------------------------------------

void SettingWindow::on_sliderSound_sliderMoved(int position)
{
    ui->soundnummer->setText(QString::number(position));
    setSoundVal(position);
}


