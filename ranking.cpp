#include "ranking.h"
#include "ui_ranking.h"
#include <startwindow.h>
#include <iostream>
#include <fstream>
#include <QTextEdit>
#include <QString>
#include <QLineEdit>


Ranking::Ranking(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ranking)
{
    ui->setupUi(this);

    //Declare myfile
    ifstream myfile;

    //Open and write level txt file input into score variables
    myfile.open("1level.txt");
    if(myfile.is_open()){
        myfile >> score_lv1;
        myfile.close();
    }
    else{
        score_lv1 = 0;
    }

    myfile.open("2level.txt");
    if(myfile.is_open()){
        myfile >> score_lv2;
        myfile.close();
    }
    else{
        score_lv2 = 0;
    }

    myfile.open("3level.txt");
    if(myfile.is_open()){
        myfile >> score_lv3;
        myfile.close();
    }
    else{
        score_lv3 = 0;
    }

    myfile.open("4level.txt");
    if(myfile.is_open()){
        myfile >> score_lv4;
        myfile.close();
    }
    else{
        score_lv4 = 0;
    }

    myfile.open("5level.txt");
    if(myfile.is_open()){
        myfile >> score_lv5;
        myfile.close();
    }
    else{
        score_lv5 = 0;
    }

    //Set score variables as text of line edits
    ui->ranking_lv1->setReadOnly(true);
    ui->ranking_lv1->setText(QString::number(score_lv1));

    ui->ranking_lv2->setReadOnly(true);
    ui->ranking_lv2->setText(QString::number(score_lv2));

    ui->ranking_lv3->setReadOnly(true);
    ui->ranking_lv3->setText(QString::number(score_lv3));

    ui->ranking_lv4->setReadOnly(true);
    ui->ranking_lv4->setText(QString::number(score_lv4));

    ui->ranking_lv5->setReadOnly(true);
    ui->ranking_lv5->setText(QString::number(score_lv5));

}

//------------------------------------------

Ranking::~Ranking()
{
    delete ui;
}

//------------------------------------------

void Ranking::on_BackButton_clicked()
{
    this -> destroy();

    StartWindow *startwindow = new StartWindow;
    startwindow -> show();
}


