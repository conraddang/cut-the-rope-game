#include "levelwindow.h"
#include "ui_levelwindow.h"
#include "startwindow.h"

LevelWindow::LevelWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LevelWindow)
{
    ui->setupUi(this);


}

//------------------------------------------

LevelWindow::~LevelWindow()
{
    delete ui;
}

//------------------------------------------

void LevelWindow::on_Level1Button_clicked()
{
    this -> destroy();

    m_level_1 = new class level_1();
    m_level_1 -> show();
}

//------------------------------------------

void LevelWindow::on_Level2Button_clicked()
{
    button->play();
    this -> destroy();

    m_level_2 = new class level_2();
    m_level_2 -> show();

}

//------------------------------------------

void LevelWindow::on_Level3Button_clicked()
{
    button->play();
    this -> destroy();

    m_level_3 = new class level_3();
    m_level_3 -> show();

}

//------------------------------------------

void LevelWindow::on_Level4Button_clicked()
{
    button->play();
    this -> destroy();

    m_level_4 = new class level_4();
    m_level_4 -> show();

}

//------------------------------------------

void LevelWindow::on_Level5Button_clicked()
{
    button->play();
    this -> destroy();

    m_level_5 = new class level_5();
    m_level_5 -> show();

}

//------------------------------------------

void LevelWindow::on_BackButton_clicked()
{
    button->play();
    this -> destroy();

    StartWindow *startwindow = new StartWindow;
    startwindow -> show();
}
