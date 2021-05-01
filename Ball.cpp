#include "Ball.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QTimer>
#include "Game.h"

extern Game * game;

Ball::Ball(QGraphicsItem *parent): QGraphicsPixmapItem(parent){
    // set graphic
    setPixmap(QPixmap(":/images/football-ball.png"));


    // connect a timer to move()
    QTimer * move_timer = new QTimer(this);
    connect(move_timer,SIGNAL(timeout()),this,SLOT(move()));
    move_timer->start(50);
}




void Ball:: move(){
    int STEP_SIZE = 5;

    double dy = STEP_SIZE;
    double dx = STEP_SIZE;

    setPos(x()+dx, y()+dy);

    // Ball bounderies X-axis
    if (pos().x() < 10)
      dx = - dx;
    if (pos().x() > 780)
      dx = - dx;

    // Ball bounderies Y-axis
    if (pos().y() < 100)
      dy = - dy;
    if (pos().y() > 350)
      dy = - dy;


}






