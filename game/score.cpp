#include "score.h"
#include <QDebug>

Score::Score(string lvlNum)
{

    QPixmap bgPixmap(":/images/images/stars0.png");
    QPixmap scaled = bgPixmap.scaled(QSize(180, 46));
    setPixmap(QPixmap(scaled));
    setPos(10, 10);

    filename = lvlNum;

    ofstream myfile;
    myfile.open(filename);
    myfile << '0';
    myfile.close();

}

//------------------------------------------

void Score::AddStars(int star)
{

    if (star == 1)
    {
        QPixmap bgPixmap(":/images/images/stars1.png");
        QPixmap scaled = bgPixmap.scaled(QSize(180, 46));
        setPixmap(QPixmap(scaled));
        setPos(10, 10);

    }
    if (star == 2)
    {
        QPixmap bgPixmap(":/images/images/stars2.png");
        QPixmap scaled = bgPixmap.scaled(QSize(180, 46));
        setPixmap(QPixmap(scaled));
        setPos(10, 10);

    }
    if (star == 3)
    {
        QPixmap bgPixmap(":/images/images/stars3.png");
        QPixmap scaled = bgPixmap.scaled(QSize(180, 46));
        setPixmap(QPixmap(scaled));
        setPos(10, 10);
    }

    //saving score
    //opening file and checking what is written there
    int bestScore = 0;
    ifstream myfile;
    myfile.open(filename);
    myfile >> bestScore;
    int currentScore = star;
    myfile.close();


    //filename = "1level.txt";
    if(bestScore < currentScore)
    {
        ofstream myfile;
        myfile.open(filename);
        myfile << to_string(currentScore);
        myfile.close();
    }



}

//------------------------------------------

void Score::incrementStars()
{
    star = star + 1;
    AddStars(star);

}

//------------------------------------------

int Score::returnStars()
{
    return star;
}


