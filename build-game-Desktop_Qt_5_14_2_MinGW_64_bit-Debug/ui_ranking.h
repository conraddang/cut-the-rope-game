/********************************************************************************
** Form generated from reading UI file 'ranking.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANKING_H
#define UI_RANKING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ranking
{
public:
    QWidget *centralwidget;
    QPushButton *BackButton;
    QTextBrowser *lv3;
    QTextBrowser *lv5;
    QTextBrowser *lv4;
    QTextBrowser *lv2;
    QTextBrowser *lv1;
    QLineEdit *ranking_lv1;
    QLineEdit *ranking_lv2;
    QLineEdit *ranking_lv3;
    QLineEdit *ranking_lv4;
    QLineEdit *ranking_lv5;
    QTextBrowser *header_2;
    QTextBrowser *header_1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Ranking)
    {
        if (Ranking->objectName().isEmpty())
            Ranking->setObjectName(QString::fromUtf8("Ranking"));
        Ranking->resize(800, 600);
        Ranking->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/wood.jpg);"));
        centralwidget = new QWidget(Ranking);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        BackButton = new QPushButton(centralwidget);
        BackButton->setObjectName(QString::fromUtf8("BackButton"));
        BackButton->setGeometry(QRect(320, 490, 161, 41));
        BackButton->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        lv3 = new QTextBrowser(centralwidget);
        lv3->setObjectName(QString::fromUtf8("lv3"));
        lv3->setGeometry(QRect(250, 260, 151, 51));
        lv3->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        lv5 = new QTextBrowser(centralwidget);
        lv5->setObjectName(QString::fromUtf8("lv5"));
        lv5->setGeometry(QRect(250, 400, 151, 51));
        lv5->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        lv4 = new QTextBrowser(centralwidget);
        lv4->setObjectName(QString::fromUtf8("lv4"));
        lv4->setGeometry(QRect(250, 330, 151, 51));
        lv4->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        lv2 = new QTextBrowser(centralwidget);
        lv2->setObjectName(QString::fromUtf8("lv2"));
        lv2->setGeometry(QRect(250, 190, 151, 51));
        lv2->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        lv1 = new QTextBrowser(centralwidget);
        lv1->setObjectName(QString::fromUtf8("lv1"));
        lv1->setGeometry(QRect(250, 120, 151, 51));
        QFont font;
        font.setPointSize(8);
        lv1->setFont(font);
        lv1->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        ranking_lv1 = new QLineEdit(centralwidget);
        ranking_lv1->setObjectName(QString::fromUtf8("ranking_lv1"));
        ranking_lv1->setGeometry(QRect(420, 120, 111, 51));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        ranking_lv1->setFont(font1);
        ranking_lv1->setCursor(QCursor(Qt::IBeamCursor));
        ranking_lv1->setLayoutDirection(Qt::LeftToRight);
        ranking_lv1->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        ranking_lv1->setMaxLength(32766);
        ranking_lv1->setCursorPosition(5);
        ranking_lv1->setAlignment(Qt::AlignCenter);
        ranking_lv1->setReadOnly(true);
        ranking_lv2 = new QLineEdit(centralwidget);
        ranking_lv2->setObjectName(QString::fromUtf8("ranking_lv2"));
        ranking_lv2->setGeometry(QRect(420, 190, 111, 51));
        ranking_lv2->setFont(font1);
        ranking_lv2->setCursor(QCursor(Qt::UpArrowCursor));
        ranking_lv2->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        ranking_lv2->setAlignment(Qt::AlignCenter);
        ranking_lv2->setReadOnly(true);
        ranking_lv3 = new QLineEdit(centralwidget);
        ranking_lv3->setObjectName(QString::fromUtf8("ranking_lv3"));
        ranking_lv3->setGeometry(QRect(420, 260, 111, 51));
        ranking_lv3->setFont(font1);
        ranking_lv3->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        ranking_lv3->setAlignment(Qt::AlignCenter);
        ranking_lv3->setReadOnly(true);
        ranking_lv4 = new QLineEdit(centralwidget);
        ranking_lv4->setObjectName(QString::fromUtf8("ranking_lv4"));
        ranking_lv4->setGeometry(QRect(420, 330, 111, 51));
        ranking_lv4->setFont(font1);
        ranking_lv4->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        ranking_lv4->setAlignment(Qt::AlignCenter);
        ranking_lv4->setReadOnly(true);
        ranking_lv5 = new QLineEdit(centralwidget);
        ranking_lv5->setObjectName(QString::fromUtf8("ranking_lv5"));
        ranking_lv5->setGeometry(QRect(420, 400, 111, 51));
        ranking_lv5->setFont(font1);
        ranking_lv5->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange2.jpg);"));
        ranking_lv5->setAlignment(Qt::AlignCenter);
        ranking_lv5->setReadOnly(true);
        header_2 = new QTextBrowser(centralwidget);
        header_2->setObjectName(QString::fromUtf8("header_2"));
        header_2->setGeometry(QRect(420, 50, 111, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font2.setPointSize(8);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        header_2->setFont(font2);
        header_2->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";"));
        header_1 = new QTextBrowser(centralwidget);
        header_1->setObjectName(QString::fromUtf8("header_1"));
        header_1->setGeometry(QRect(250, 50, 151, 31));
        header_1->setFont(font2);
        header_1->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";"));
        Ranking->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Ranking);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Ranking->setMenuBar(menubar);
        statusbar = new QStatusBar(Ranking);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Ranking->setStatusBar(statusbar);

        retranslateUi(Ranking);

        QMetaObject::connectSlotsByName(Ranking);
    } // setupUi

    void retranslateUi(QMainWindow *Ranking)
    {
        Ranking->setWindowTitle(QCoreApplication::translate("Ranking", "MainWindow", nullptr));
        BackButton->setText(QCoreApplication::translate("Ranking", "Back", nullptr));
        lv3->setHtml(QCoreApplication::translate("Ranking", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text'; font-size:18pt; font-weight:600;\">Level 3</span></p></body></html>", nullptr));
        lv5->setHtml(QCoreApplication::translate("Ranking", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text'; font-size:18pt; font-weight:600;\">Level 5</span></p></body></html>", nullptr));
        lv4->setHtml(QCoreApplication::translate("Ranking", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text'; font-size:18pt; font-weight:600;\">Level 4</span></p></body></html>", nullptr));
        lv2->setHtml(QCoreApplication::translate("Ranking", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text'; font-size:18pt; font-weight:600;\">Level 2</span></p></body></html>", nullptr));
        lv1->setHtml(QCoreApplication::translate("Ranking", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text'; font-size:18pt; font-weight:600;\">Level 1</span></p></body></html>", nullptr));
        ranking_lv1->setText(QCoreApplication::translate("Ranking", "Stars", nullptr));
        ranking_lv2->setText(QCoreApplication::translate("Ranking", "Stars", nullptr));
        ranking_lv3->setText(QCoreApplication::translate("Ranking", "Stars", nullptr));
        ranking_lv4->setText(QCoreApplication::translate("Ranking", "Stars", nullptr));
        ranking_lv5->setText(QCoreApplication::translate("Ranking", "Stars", nullptr));
        header_2->setHtml(QCoreApplication::translate("Ranking", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text'; font-size:10pt; font-weight:600; color:#ffffff;\"># Stars </span></p></body></html>", nullptr));
        header_1->setHtml(QCoreApplication::translate("Ranking", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text'; font-size:10pt; font-weight:600; color:#ffffff;\"># Level </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ranking: public Ui_Ranking {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANKING_H
