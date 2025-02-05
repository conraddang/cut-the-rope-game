/********************************************************************************
** Form generated from reading UI file 'startwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTWINDOW_H
#define UI_STARTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartWindow
{
public:
    QWidget *centralwidget;
    QPushButton *StartButton;
    QPushButton *QuitButton;
    QPushButton *RankingButton;
    QPushButton *LevelButton;
    QPushButton *SettingButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QWidget *StartWindow)
    {
        if (StartWindow->objectName().isEmpty())
            StartWindow->setObjectName(QString::fromUtf8("StartWindow"));
        StartWindow->resize(1200, 600);
        StartWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/wood.jpg);"));
        centralwidget = new QWidget(StartWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        centralwidget->setGeometry(QRect(0, -40, 1201, 751));
        StartButton = new QPushButton(centralwidget);
        StartButton->setObjectName(QString::fromUtf8("StartButton"));
        StartButton->setGeometry(QRect(500, 260, 201, 51));
        StartButton->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);\n"
""));
        QuitButton = new QPushButton(centralwidget);
        QuitButton->setObjectName(QString::fromUtf8("QuitButton"));
        QuitButton->setGeometry(QRect(520, 510, 161, 41));
        QuitButton->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        RankingButton = new QPushButton(centralwidget);
        RankingButton->setObjectName(QString::fromUtf8("RankingButton"));
        RankingButton->setGeometry(QRect(520, 390, 161, 41));
        RankingButton->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        LevelButton = new QPushButton(centralwidget);
        LevelButton->setObjectName(QString::fromUtf8("LevelButton"));
        LevelButton->setGeometry(QRect(520, 330, 161, 41));
        LevelButton->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        SettingButton = new QPushButton(centralwidget);
        SettingButton->setObjectName(QString::fromUtf8("SettingButton"));
        SettingButton->setGeometry(QRect(520, 450, 161, 41));
        SettingButton->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 70, 941, 241));
        label->setAutoFillBackground(false);
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/ITSY BITSY TERRY .png")));
        label->setScaledContents(true);
        QuitButton->raise();
        RankingButton->raise();
        LevelButton->raise();
        SettingButton->raise();
        label->raise();
        StartButton->raise();
        menubar = new QMenuBar(StartWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 21));
        statusbar = new QStatusBar(StartWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setGeometry(QRect(0, 0, 3, 20));

        retranslateUi(StartWindow);

        QMetaObject::connectSlotsByName(StartWindow);
    } // setupUi

    void retranslateUi(QWidget *StartWindow)
    {
        StartWindow->setWindowTitle(QCoreApplication::translate("StartWindow", "MainWindow", nullptr));
        StartButton->setText(QCoreApplication::translate("StartWindow", "Start", nullptr));
        QuitButton->setText(QCoreApplication::translate("StartWindow", "Quit", nullptr));
        RankingButton->setText(QCoreApplication::translate("StartWindow", "Achievements", nullptr));
        LevelButton->setText(QCoreApplication::translate("StartWindow", "Level", nullptr));
        SettingButton->setText(QCoreApplication::translate("StartWindow", "Settings", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StartWindow: public Ui_StartWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTWINDOW_H
