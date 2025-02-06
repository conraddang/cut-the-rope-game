#ifndef STARTWINDOW_H
#define STARTWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QMediaPlayer>
#include <levelbase.h>
#include <environment.h>
#include <level_1.h>
#include <settingwindow.h>
#include "levelwindow.h"
#include "audio.h"
#include "ranking.h"

class LevelWindow;

//! \brief This class defines the first window that shows up. It's the main menu
namespace Ui {
class StartWindow;
}

//! \brief This class defines the first window that shows up. It's the main menu
class StartWindow : public QWidget, public audio

{
    Q_OBJECT

public:
    //! \brief Constructor
    explicit StartWindow(QWidget *parent = nullptr);

    //! \brief Destructor
    ~StartWindow();


private slots:
    //! \brief Starts level 1 once the start button is clicked
    void on_StartButton_clicked();

    //! \brief Opens the level overview once the level button is clicked
    void on_LevelButton_clicked();

    //! \brief Closes the whole game once the quit button is clicked
    void on_QuitButton_clicked();

    //! \brief Open Settings UI once the settings button is clicked
    void on_SettingButton_clicked();

    //! \brief Open Ranking UI once the ranking button is clicked
    void on_RankingButton_clicked();


private:
    //! \brief Pointer to the StartWindow UI
    Ui::StartWindow *ui;

    //! \brief Pointer to the LevelBase UI
    LevelBase *levelbase;

    //! \brief Pointer to level_1
    level_1 *m_level_1;

    //! \brief Pointer to the LevelWindow UI
    LevelWindow *levelwindow;


    //! \brief Pointer to the Settings UI
    SettingWindow *settingwindow;

    //! \brief Pointer to the Ranking UI
    Ranking *rankingwindow;

};

#endif // STARTWINDOW_H
