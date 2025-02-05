#include <environment.h>
#include <cutter.h>
#include <spider.h>
#include <spiderThread.h>
#include <fly.h>
#include <trampoline.h>
#include <plant.h>
#include <startwindow.h>

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

    StartWindow sw;
    sw.show();

    return a.exec();
}
