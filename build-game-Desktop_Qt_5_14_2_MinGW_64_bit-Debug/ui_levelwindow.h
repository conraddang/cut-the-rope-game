/********************************************************************************
** Form generated from reading UI file 'levelwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEVELWINDOW_H
#define UI_LEVELWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LevelWindow
{
public:
    QWidget *centralwidget;
    QPushButton *BackButton;
    QPushButton *Level1Button;
    QPushButton *Level2Button;
    QPushButton *Level3Button;
    QPushButton *Level4Button;
    QPushButton *Level5Button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LevelWindow)
    {
        if (LevelWindow->objectName().isEmpty())
            LevelWindow->setObjectName(QString::fromUtf8("LevelWindow"));
        LevelWindow->setEnabled(true);
        LevelWindow->resize(800, 600);
        LevelWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/wood.jpg);"));
        centralwidget = new QWidget(LevelWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        BackButton = new QPushButton(centralwidget);
        BackButton->setObjectName(QString::fromUtf8("BackButton"));
        BackButton->setGeometry(QRect(320, 450, 161, 41));
        BackButton->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        Level1Button = new QPushButton(centralwidget);
        Level1Button->setObjectName(QString::fromUtf8("Level1Button"));
        Level1Button->setGeometry(QRect(10, 260, 141, 41));
        Level1Button->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        Level2Button = new QPushButton(centralwidget);
        Level2Button->setObjectName(QString::fromUtf8("Level2Button"));
        Level2Button->setGeometry(QRect(170, 260, 141, 41));
        Level2Button->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        Level3Button = new QPushButton(centralwidget);
        Level3Button->setObjectName(QString::fromUtf8("Level3Button"));
        Level3Button->setGeometry(QRect(330, 260, 141, 41));
        Level3Button->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        Level4Button = new QPushButton(centralwidget);
        Level4Button->setObjectName(QString::fromUtf8("Level4Button"));
        Level4Button->setGeometry(QRect(490, 260, 141, 41));
        Level4Button->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        Level5Button = new QPushButton(centralwidget);
        Level5Button->setObjectName(QString::fromUtf8("Level5Button"));
        Level5Button->setGeometry(QRect(650, 260, 141, 41));
        Level5Button->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        LevelWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LevelWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        LevelWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LevelWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LevelWindow->setStatusBar(statusbar);

        retranslateUi(LevelWindow);

        QMetaObject::connectSlotsByName(LevelWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LevelWindow)
    {
        LevelWindow->setWindowTitle(QCoreApplication::translate("LevelWindow", "MainWindow", nullptr));
        BackButton->setText(QCoreApplication::translate("LevelWindow", "Back", nullptr));
        Level1Button->setText(QCoreApplication::translate("LevelWindow", "Level 1", nullptr));
        Level2Button->setText(QCoreApplication::translate("LevelWindow", "Level 2", nullptr));
        Level3Button->setText(QCoreApplication::translate("LevelWindow", "Level 3", nullptr));
        Level4Button->setText(QCoreApplication::translate("LevelWindow", "Level 4", nullptr));
        Level5Button->setText(QCoreApplication::translate("LevelWindow", "Level 5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LevelWindow: public Ui_LevelWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVELWINDOW_H
