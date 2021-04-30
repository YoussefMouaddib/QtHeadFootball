#include "Ball.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QTimer>
#include "Game.h"
#define STEP_SIZE 5
#define GRAVITY 0.5
#define BOUNCE 0.7
#define XFRICTION 0.1


extern Game * game;

Ball::Ball(QGraphicsItem *parent): QGraphicsPixmapItem(parent){
    // set graphic
    setPixmap(QPixmap(":/new/prefix1/football-ball.png"));



    // connect a timer to move()
    QTimer * move_timer = new QTimer(this);
    connect(move_timer,SIGNAL(timeout()),this,SLOT(move()));
    move_timer->start(50);
}




void Ball:: move(){
    double dy = STEP_SIZE;
    double dx = STEP_SIZE;



    // Ball bounderies X-axis
    if (pos().x() < 10 || pos().x() > 780){
      dx *= - 1;}

    // Ball bounderies Y-axis
    if (pos().y() < 100 || pos().y() > 440){
        dy *= - BOUNCE;}

    setPos(x()+dx, y()+dy);
    dy += GRAVITY;

    if (dy < 0 && dy> -2.1)
        dx = 0;

    if(dx>0)
       dx -= XFRICTION;
    if(dx<0)
       dx += XFRICTION;
}



