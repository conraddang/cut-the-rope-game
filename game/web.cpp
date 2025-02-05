#include <web.h>

#include <Box2D/box2d/box2d.h>
#include <QTimer>
#include <QGraphicsScene>
#include <QList>

qreal fromB2_w(qreal value) {
    return value*SCALE;
}

qreal toB2_w(qreal value) {
    return value/SCALE;
}

//------------------------------------------

Web :: Web(QPointF initPos) {
    setPixmap(QPixmap(":/images/images/web_pic.png"));
    setPos(fromB2_w(initPos.x()), fromB2_w(initPos.y()));
}

//------------------------------------------

Web :: ~Web() {

}
