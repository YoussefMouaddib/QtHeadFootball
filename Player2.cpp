#include "Player2.h"
#include <QGraphicsScene>
#include <QKeyEvent>


Player2::Player2(QGraphicsItem *parent): QGraphicsPixmapItem(parent){



    // set graphic
    setPixmap(QPixmap(":/new/prefix1/R1.png"));
}

void Player2::keyPressEvent(QKeyEvent *event){
    // move the player2 left and right
    if (event->key() == Qt::Key_A){
        if (pos().x() > 0)
        setPos(x()-10,y());
    }
    else if (event->key() == Qt::Key_D){
        if (pos().x() + 100 < 800)
        setPos(x()+10,y());
    }



}
