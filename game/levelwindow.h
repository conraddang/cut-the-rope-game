#ifndef LEVELWINDOW_H
#define LEVELWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>

#include <level_1.h>
#include <level_2.h>
#include <level_3.h>
#include <level_4.h>
#include <level_5.h>
#include <startwindow.h>
#include "audio.h"

namespace Ui {
class LevelWindow;
}

//! \brief Class for the level selection. Allows player to choose a level and directs him to it
class LevelWindow : public QMainWindow, public audio
{
    Q_OBJECT

public:
    //! \brief Constructor
    explicit LevelWindow(QWidget *parent = nullptr);

    //! \brief Destructor
    ~LevelWindow();


private slots:
    //! \brief Load level 1 once level 1 button is clicked
    void on_Level1Button_clicked();

    //! \brief Load level 2 once level 2 button is clicked
    void on_Level2Button_clicked();

    //! \brief Load level 3 once level 3 button is clicked
    void on_Level3Button_clicked();

    //! \brief Load level 4 once level 4 button is clicked
    void on_Level4Button_clicked();

    //! \brief Load level 5 once level 5 button is clicked
    void on_Level5Button_clicked();

    //! \brief Go back to menu once back button is clicked
    void on_BackButton_clicked();


private:
    //! \brief Pointer to the LevelWindow UI
    Ui::LevelWindow *ui;

    //! \brief Pointer to level_1
    level_1 *m_level_1;

    //! \brief Pointer to level_2
    level_2 *m_level_2;

    //! \brief Pointer to level_3
    level_3 *m_level_3;

    //! \brief Pointer to level_4
    level_4 *m_level_4;

    //! \brief Pointer to level_5
    level_5 *m_level_5;

};

#endif // LEVELWINDOW_H
