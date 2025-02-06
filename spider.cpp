#include <spider.h>
#include <trampoline.h>
#include <environment.h>
#include <gameover.h>
#include <win.h>
#include <web.h>
#include <levelbase.h>

#include <Box2D/box2d/box2d.h>
#include <QDebug>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QGraphicsView>
#include <QTimer>
#include <QList>
#include <QImage>


Spider::Spider(b2World *world, qreal radius, QPointF initPos)
: QGraphicsEllipseItem(0){

    this -> m_scene = scene();

    setRect(-radius*100, -radius*100, radius*2*100, radius*2*100);
    setBrush(QBrush(Qt::black));
    setPos(initPos.x()*100, initPos.y()*100);

    b2BodyDef bodyDef;
    bodyDef.type = b2_dynamicBody;
    bodyDef.position.Set(initPos.x(), initPos.y());
    bodyDef.linearDamping = 0.2;

    body = world->CreateBody(&bodyDef);

    b2CircleShape shape;
    shape.m_radius = radius;

    b2Fixture* fixture = body->CreateFixture(&shape, 1.0f);
    fixture->SetRestitution(0.7);


    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(collision_tram()));
    connect(timer, SIGNAL(timeout()), this, SLOT(ContactSpiderWeb()));
    connect(timer, SIGNAL(timeout()), this, SLOT(OutOfBoundaries()));
    timer->start(50);
}

//------------------------------------------

Spider :: ~Spider() {
    body -> GetWorld() -> DestroyBody(body);
}

//------------------------------------------

void Spider::advance(int phase)
{
    if(phase) {
        setPos(body->GetPosition().x*100, body->GetPosition().y*100);
    }
}

//------------------------------------------

void Spider :: OutOfBoundaries() {
    b2Transform transf_sp = body -> GetTransform();

    // left side
    if(transf_sp.p.x < 0.25) {
        scene()->removeItem(this);
        delete this;

        gameover* window = new gameover;
        window->show();

        game_over->setVolume(getSoundVal());
        game_over->play();

        return;
    }

    // right side
    else if(transf_sp.p.x > 11.75) {
        scene()->removeItem(this);
        delete this;

        gameover* window = new gameover;
        window->show();

        game_over->setVolume(getSoundVal());
        game_over->play();

        return;
    }

    // top
    else if(transf_sp.p.y < 0.25) {
        scene()->removeItem(this);
        delete this;

        gameover* window = new gameover;
        window->show();

        game_over->setVolume(getSoundVal());
        game_over->play();

        return;
    }
}

//------------------------------------------

void Spider :: ContactSpiderWeb() {
    QList<QGraphicsItem *> colliding_items = collidingItems();
        for(int i = 0, n = colliding_items.size(); i < n; i++){
            if (typeid(*(colliding_items[i])) == typeid(Web)){

                //saving the result
                FinalScore("1level.txt", "1level_current.txt");
                FinalScore("2level.txt", "2level_current.txt");
                FinalScore("3level.txt", "3level_current.txt");
                FinalScore("4level.txt", "4level_current.txt");
                FinalScore("5level.txt", "5level_current.txt");

                //the result saved
                scene()->removeItem(this);
                delete this;

                winning->setVolume(getSoundVal());
                winning->play();
                win *window = new win;
                window -> show();

            }
        }
}

//------------------------------------------

void Spider :: collision_tram() {
    QList<QGraphicsItem *> colliding_items = collidingItems();
        for(int i = 0, n = colliding_items.size(); i < n; i++){
            if (typeid(*(colliding_items[i])) == typeid(Trampolin)){

                tram_poline->setVolume(getSoundVal());
                tram_poline->play();

            }
        }
}

//------------------------------------------

void Spider::FinalScore(string level, string currentResult)
{

    int bestScore = 0;
    int currentScore = 0;
    ifstream myfile;
    myfile.open(level);
    myfile >> bestScore;
    myfile.close();
    myfile.open(currentResult);
    myfile >> currentScore;
    myfile.close();

    //" = " is iincluded so "0" result can be also saved
    if(bestScore <= currentScore)
    {
        ofstream myfile;
        myfile.open(level);
        myfile << to_string(currentScore);
        myfile.close();
    }


}


