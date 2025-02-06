#include <trampoline.h>
#include <spider.h>


//QSizeF size for setting a bouncing texture
//int imSize is a size of Trampoline
//I would suggest you to use a dafault ones so you don´t need to synchonize them.
//But if you wish to change size of jelly - be sure that they are lying in each other
//Default: size = (0.7, 0.7); imSize = 100
Trampolin::Trampolin(b2World *world, QSizeF size, QPointF initPos, qreal angle, int imSize)
{
    //add image of jelly as trampoline
    QPixmap bgPixmap(":/images/images/jelly.png");
    QPixmap scaled = bgPixmap.scaled(QSize(imSize, imSize));
    setPixmap(QPixmap(scaled));
    //stupid image is not sinchronized with textures below. So I push it manually on the left

    setPos(initPos.x()*100-65, initPos.y()*100-100);

    setRotation(angle);

//Restitution for jelly
//An invisible square body under the jelly image
    b2BodyDef bodyDef;
    bodyDef.type = b2_staticBody;
    bodyDef.position.Set(initPos.x(), initPos.y());
    bodyDef.angle = 3.14*angle/180;
    body = world->CreateBody(&bodyDef);
    b2PolygonShape shape;
    shape.SetAsBox(size.width()/2, size.height()/2);
    body->CreateFixture(&shape, 0.0f);
    b2FixtureDef fixtureDef;
    fixtureDef.shape = &shape;
    fixtureDef.density = 0.0f;
    fixtureDef.restitution = 1.7;
    body->CreateFixture(&fixtureDef);

}

//------------------------------------------

Trampolin::~Trampolin()
{
    body->GetWorld()->DestroyBody(body);
}


