#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QTimer>
#include <Box2D/box2d/box2d.h>

#define SCALE 100

QT_BEGIN_NAMESPACE
namespace Ui { class Environment; }
QT_END_NAMESPACE

class Scene : public QGraphicsScene {

    Q_OBJECT

    public:
        Scene(qreal x, qreal y, qreal width, qreal height, b2World *world);

    public slots:
        void advance();

    private:
        b2World* world;


            // QGraphicsScene interface
    protected:
            void mousePressEvent(QGraphicsSceneMouseEvent *event);
};

class Environment : public QWidget
{
    Q_OBJECT

    public:
        explicit Environment(QWidget *parent = nullptr);
        ~Environment();

    private:
        Ui::Environment *ui;
        Scene* scene;
        QTimer* frameTimer;
        b2World* world;
};

#endif // ENVIRONMENT_H
