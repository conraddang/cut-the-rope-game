#include <levelwindow.h>
#include <ranking.h>
#include <settingwindow.h>
#include "startwindow.h"
#include "ui_startwindow.h"
#include <QMediaPlayer>
#include <iostream>
using namespace std;

StartWindow::StartWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StartWindow)
{
    ui->setupUi(this);

    if(menu->state() == QMediaPlayer::StoppedState)
    {
        menu->setVolume(getMusicVal());
        menu->play();
    }
}

//------------------------------------------

StartWindow::~StartWindow()
{
    delete ui;
}

//------------------------------------------

void StartWindow::on_StartButton_clicked()
{
    button->play();
    menu->stop();
    this -> destroy();

    //levelbase = new LevelBase();
    m_level_1 = new class level_1();
    m_level_1 -> show();

}

//------------------------------------------

void StartWindow::on_LevelButton_clicked()
{
    button->play(); 
    menu->stop();
    this -> destroy();

    levelwindow = new class LevelWindow();
    levelwindow -> show();

}

//------------------------------------------

void StartWindow::on_QuitButton_clicked()
{
    button->play();
    menu->stop();
    this -> destroy();
}

//------------------------------------------

void StartWindow::on_SettingButton_clicked()
{
    button->play();
    menu->stop();
    this -> destroy();

    settingwindow = new class SettingWindow();
    settingwindow -> show();
}

//------------------------------------------

void StartWindow::on_RankingButton_clicked()
{
    button->play();
    menu->stop();
    this -> destroy();

    rankingwindow = new class Ranking();
    rankingwindow -> show();
}

