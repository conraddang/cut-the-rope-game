/********************************************************************************
** Form generated from reading UI file 'gameover.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOVER_H
#define UI_GAMEOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gameover
{
public:
    QLabel *label;
    QPushButton *MenuButton;
    QGraphicsView *graphicsView;
    QPushButton *LevelButton;

    void setupUi(QWidget *gameover)
    {
        if (gameover->objectName().isEmpty())
            gameover->setObjectName(QString::fromUtf8("gameover"));
        gameover->resize(433, 282);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(9);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gameover->sizePolicy().hasHeightForWidth());
        gameover->setSizePolicy(sizePolicy);
        gameover->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/wood.jpg);"));
        label = new QLabel(gameover);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 20, 241, 151));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/gameover.jpeg")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        MenuButton = new QPushButton(gameover);
        MenuButton->setObjectName(QString::fromUtf8("MenuButton"));
        MenuButton->setGeometry(QRect(250, 200, 120, 50));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        MenuButton->setFont(font1);
        MenuButton->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        graphicsView = new QGraphicsView(gameover);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, -10, 441, 291));
        graphicsView->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/wood.jpg);"));
        LevelButton = new QPushButton(gameover);
        LevelButton->setObjectName(QString::fromUtf8("LevelButton"));
        LevelButton->setGeometry(QRect(70, 200, 120, 50));
        LevelButton->setFont(font1);
        LevelButton->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        LevelButton->setIconSize(QSize(30, 30));
        graphicsView->raise();
        label->raise();
        MenuButton->raise();
        LevelButton->raise();

        retranslateUi(gameover);

        QMetaObject::connectSlotsByName(gameover);
    } // setupUi

    void retranslateUi(QWidget *gameover)
    {
        gameover->setWindowTitle(QCoreApplication::translate("gameover", "Form", nullptr));
        label->setText(QString());
        MenuButton->setText(QCoreApplication::translate("gameover", "Menu", nullptr));
        LevelButton->setText(QCoreApplication::translate("gameover", "Level", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gameover: public Ui_gameover {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVER_H
