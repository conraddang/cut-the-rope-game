#ifndef WIN_H
#define WIN_H
#include <QWidget>
#include "audio.h"
class LevelWindow;

namespace Ui {
class win;
}

//! \brief THis class defines the UI which will pop up once the spider lands safely and the game is won
class win : public QWidget, public audio
{
    Q_OBJECT

public:
    //! \brief Constructor
    explicit win(QWidget *parent = nullptr);

    //! \brief Destructor
    ~win();


private slots:
    //! \brief Level UI will appear once the level button is clicked
    void on_LevelButton_clicked();

    //! \brief Menu UI opened once Menu button is clicked
    void on_MenuButton_clicked();


private:
    //! \brief Pointer to the win UI
    Ui::win *ui;

    //! \brief Pointer to the LevelWindow
    LevelWindow *levelwindow;

};

#endif // WIN_H
