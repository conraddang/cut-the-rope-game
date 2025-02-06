/********************************************************************************
** Form generated from reading UI file 'win.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIN_H
#define UI_WIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_win
{
public:
    QLabel *label;
    QPushButton *MenuButton;
    QPushButton *LevelButton;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *win)
    {
        if (win->objectName().isEmpty())
            win->setObjectName(QString::fromUtf8("win"));
        win->resize(410, 339);
        win->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/wood.jpg);"));
        label = new QLabel(win);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 40, 231, 171));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/win.jpeg")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        MenuButton = new QPushButton(win);
        MenuButton->setObjectName(QString::fromUtf8("MenuButton"));
        MenuButton->setGeometry(QRect(230, 230, 120, 50));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        MenuButton->setFont(font1);
        MenuButton->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        LevelButton = new QPushButton(win);
        LevelButton->setObjectName(QString::fromUtf8("LevelButton"));
        LevelButton->setGeometry(QRect(60, 230, 120, 50));
        LevelButton->setFont(font1);
        LevelButton->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        LevelButton->setIconSize(QSize(30, 30));
        graphicsView = new QGraphicsView(win);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 411, 341));
        graphicsView->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/wood.jpg);"));
        graphicsView->raise();
        label->raise();
        MenuButton->raise();
        LevelButton->raise();

        retranslateUi(win);

        QMetaObject::connectSlotsByName(win);
    } // setupUi

    void retranslateUi(QWidget *win)
    {
        win->setWindowTitle(QCoreApplication::translate("win", "Form", nullptr));
        label->setText(QString());
        MenuButton->setText(QCoreApplication::translate("win", "Menu", nullptr));
        LevelButton->setText(QCoreApplication::translate("win", "Level", nullptr));
    } // retranslateUi

};

namespace Ui {
    class win: public Ui_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIN_H
