/********************************************************************************
** Form generated from reading UI file 'levelbase.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEVELBASE_H
#define UI_LEVELBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LevelBase
{
public:
    QGraphicsView *graphicsView;
    QPushButton *BackButton;

    void setupUi(QWidget *LevelBase)
    {
        if (LevelBase->objectName().isEmpty())
            LevelBase->setObjectName(QString::fromUtf8("LevelBase"));
        LevelBase->resize(1200, 1000);
        graphicsView = new QGraphicsView(LevelBase);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1200, 600));
        BackButton = new QPushButton(LevelBase);
        BackButton->setObjectName(QString::fromUtf8("BackButton"));
        BackButton->setGeometry(QRect(1030, 40, 93, 28));
        BackButton->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));

        retranslateUi(LevelBase);

        QMetaObject::connectSlotsByName(LevelBase);
    } // setupUi

    void retranslateUi(QWidget *LevelBase)
    {
        LevelBase->setWindowTitle(QCoreApplication::translate("LevelBase", "Form", nullptr));
        BackButton->setText(QCoreApplication::translate("LevelBase", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LevelBase: public Ui_LevelBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVELBASE_H
