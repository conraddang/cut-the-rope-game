/********************************************************************************
** Form generated from reading UI file 'settingwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGWINDOW_H
#define UI_SETTINGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingWindow
{
public:
    QWidget *centralwidget;
    QPushButton *BackButton;
    QTextBrowser *musicnummer;
    QTextBrowser *textBrowser_4;
    QTextBrowser *soundnummer;
    QTextBrowser *textBrowser_6;
    QSlider *sliderMusic;
    QSlider *sliderSound;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SettingWindow)
    {
        if (SettingWindow->objectName().isEmpty())
            SettingWindow->setObjectName(QString::fromUtf8("SettingWindow"));
        SettingWindow->resize(800, 600);
        SettingWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/wood.jpg);"));
        centralwidget = new QWidget(SettingWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        BackButton = new QPushButton(centralwidget);
        BackButton->setObjectName(QString::fromUtf8("BackButton"));
        BackButton->setGeometry(QRect(340, 400, 161, 41));
        BackButton->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        musicnummer = new QTextBrowser(centralwidget);
        musicnummer->setObjectName(QString::fromUtf8("musicnummer"));
        musicnummer->setGeometry(QRect(430, 130, 121, 51));
        musicnummer->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        textBrowser_4 = new QTextBrowser(centralwidget);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(290, 130, 121, 51));
        textBrowser_4->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        soundnummer = new QTextBrowser(centralwidget);
        soundnummer->setObjectName(QString::fromUtf8("soundnummer"));
        soundnummer->setGeometry(QRect(430, 260, 121, 51));
        soundnummer->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        textBrowser_6 = new QTextBrowser(centralwidget);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(290, 260, 121, 51));
        textBrowser_6->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        sliderMusic = new QSlider(centralwidget);
        sliderMusic->setObjectName(QString::fromUtf8("sliderMusic"));
        sliderMusic->setGeometry(QRect(290, 190, 261, 22));
        sliderMusic->setValue(99);
        sliderMusic->setOrientation(Qt::Horizontal);
        sliderMusic->setTickInterval(0);
        sliderSound = new QSlider(centralwidget);
        sliderSound->setObjectName(QString::fromUtf8("sliderSound"));
        sliderSound->setGeometry(QRect(290, 320, 261, 22));
        sliderSound->setValue(99);
        sliderSound->setOrientation(Qt::Horizontal);
        sliderSound->setTickInterval(0);
        SettingWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SettingWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        SettingWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SettingWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SettingWindow->setStatusBar(statusbar);

        retranslateUi(SettingWindow);

        QMetaObject::connectSlotsByName(SettingWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SettingWindow)
    {
        SettingWindow->setWindowTitle(QCoreApplication::translate("SettingWindow", "MainWindow", nullptr));
        BackButton->setText(QCoreApplication::translate("SettingWindow", "Back", nullptr));
        musicnummer->setHtml(QCoreApplication::translate("SettingWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text'; font-size:18pt; font-weight:600;\">100</span></p></body></html>", nullptr));
        textBrowser_4->setHtml(QCoreApplication::translate("SettingWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text'; font-size:18pt; font-weight:600;\">Music</span></p></body></html>", nullptr));
        soundnummer->setHtml(QCoreApplication::translate("SettingWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text'; font-size:18pt; font-weight:600;\">100</span></p></body></html>", nullptr));
        textBrowser_6->setHtml(QCoreApplication::translate("SettingWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text'; font-size:18pt; font-weight:600;\">Sound</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingWindow: public Ui_SettingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGWINDOW_H
