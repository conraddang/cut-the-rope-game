/********************************************************************************
** Form generated from reading UI file 'environment.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENVIRONMENT_H
#define UI_ENVIRONMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Environment
{
public:
    QGraphicsView *graphicsView;

    void setupUi(QWidget *Environment)
    {
        if (Environment->objectName().isEmpty())
            Environment->setObjectName(QString::fromUtf8("Environment"));
        Environment->resize(400, 300);
        graphicsView = new QGraphicsView(Environment);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 401, 301));

        retranslateUi(Environment);

        QMetaObject::connectSlotsByName(Environment);
    } // setupUi

    void retranslateUi(QWidget *Environment)
    {
        Environment->setWindowTitle(QCoreApplication::translate("Environment", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Environment: public Ui_Environment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENVIRONMENT_H
