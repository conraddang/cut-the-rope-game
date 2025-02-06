#ifndef SETTINGWINDOW_H
#define SETTINGWINDOW_H

#include <QWidget>
#include <QMainWindow>
#include <QMediaPlayer>
#include <QDialog>
#include <QDebug>
#include <levelbase.h>
#include <environment.h>
#include <level_1.h>
#include "audio.h"
#include <QTextBrowser>
#include <QTextEdit>


namespace Ui {
class SettingWindow;
}

//! \brief This class defines the Settings UI
class SettingWindow : public QMainWindow, public audio
{
    Q_OBJECT


public:
    //! \brief Constructor
    explicit SettingWindow(QWidget *parent = nullptr);

    //! \brief Destructor
    ~SettingWindow();


private slots:
    //! \brief Move back to Menu UI once the back button is clicked
    void on_BackButton_clicked();

    //! \brief Position of music slider collected while it is moved
    void on_sliderMusic_sliderMoved(int position);

    //! \brief Position of sound slider collected while it is moved
    void on_sliderSound_sliderMoved(int position);


private:
    //! \brief Pointer to the Settings UI
    Ui::SettingWindow *ui;

};

#endif // SETTINGWINDOW_H
