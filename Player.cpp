#include "Player.h"
#include <QGraphicsScene>
#include <QKeyEvent>


Player::Player(QGraphicsItem *parent): QGraphicsPixmapItem(parent){


    // set graphic
    setPixmap(QPixmap(":/new/prefix1/L1.png"));
}

void Player::keyPressEvent(QKeyEvent *event){
    // move the player left and right
    if (event->key() == Qt::Key_Left){
        if (pos().x() > 0)
        setPos(x()-10,y());
    }
    else if (event->key() == Qt::Key_Right){
        if (pos().x() + 100 < 800)
        setPos(x()+10,y());
    }
    int jump = getisJump();
    int jumpC = getjumpCount();

    if (jump == 0){
        if (event->key() == Qt::Key_Up){
            setisJump(1);}}


    else {
         if (jumpC >= -7){

            setPos(x(),y()-(jumpC * abs(jumpC)) * 0.5);
            setjumpCount(jumpC - 1);
             }
        else {
            setjumpCount(7);
            setisJump(0);
        }
}
}
