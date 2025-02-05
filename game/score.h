#ifndef SCORE_H
#define SCORE_H

#include <QWidget>
#include "Box2D/box2d/box2d.h"
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsEllipseItem>
#include <QGraphicsRectItem>
#include <QTimer>

// saving score
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#include <QGraphicsPixmapItem>


//! \brief This class checks how many flies have been connected and adjustes and displays the score accodingly
class Score : public QObject, public QGraphicsPixmapItem
{
public:
    //! \brief Constructor
    Score(string lvlNum);

    //! \brief Integer counting number of stars
    int star = 0;

    //! \brief String with filename to the score files
    string filename;

    //! \brief Changes the stars picture in the level
    void AddStars(int star);

    //! \brief Counts up stars
    void incrementStars();

    //! \brief Returns the star variable
    int returnStars();

};

#endif // SCORE_H
