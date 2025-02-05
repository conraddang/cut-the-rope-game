#ifndef GAMEOVER_H
#define GAMEOVER_H

#include <QWidget>
#include <QGraphicsView>
#include <environment.h>
#include "audio.h"

class LevelWindow;

namespace Ui {
class gameover;
}

//! \brief Class which defines the gameover UI which will appear if the spider dies and the game is over
class gameover : public QWidget, public audio
{
    Q_OBJECT

public:
    //! \brief Constructor
    explicit gameover(QWidget *parent = nullptr);

    //! \brief Destructor
    ~gameover();


private slots:
    //! \brief Level Ui loaded once the Level button is clicked
    void on_LevelButton_clicked();

    //! \brief Menu loaded once the Menu button is clicked
    void on_MenuButton_clicked();


private:
    //! \brief Pointer to the gameover UI
    Ui::gameover *ui;

    //! \brief Pointer to the LevelWindow UI
    LevelWindow *levelwindow;
};

#endif // GAMEOVER_H
