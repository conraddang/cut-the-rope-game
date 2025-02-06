#ifndef RANKING_H
#define RANKING_H

#include <QWidget>
#include <QMainWindow>
#include <QMediaPlayer>
#include <QDialog>
#include <QDebug>
#include <QMainWindow>
#include "audio.h"
#include <QTextBrowser>
#include <QTextEdit>
#include "score.h"

namespace Ui {
class Ranking;
}

//! \brief This class defines the highscore UI
class Ranking : public QMainWindow
{
    Q_OBJECT

public:
    //! \brief Constructor
    explicit Ranking(QWidget *parent = nullptr);

    //! \brief Destructor
    ~Ranking();


private slots:

    //! \brief Move back to Menu UI once the back button is clicked
    void on_BackButton_clicked();


private:
    //! \brief Pointer to the Ranking UI
    Ui::Ranking *ui;

    //! \brief Integer for level 1 score
    int score_lv1;

    //! \brief Integer for level 2 score
    int score_lv2;

    //! \brief Integer for level 3 score
    int score_lv3;

    //! \brief Integer for level 4 score
    int score_lv4;

    //! \brief Integer for level 5 score
    int score_lv5;
};

#endif // RANKING_H
