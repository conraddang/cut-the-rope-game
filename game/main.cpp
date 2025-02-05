#include <environment.h>
#include <cutter.h>
#include <spider.h>
#include <threads.h>
#include <bubble.h>
#include <fly.h>
#include <menu.h>
#include <trampoline.h>
#include <plant.h>

#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include <QGraphicsView>
#include <QObject>

#include <Box2D/box2d/box2d.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Environment env;

    return a.exec();
}
