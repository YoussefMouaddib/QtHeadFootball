#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>


class Player:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Player(QGraphicsItem * parent=0);
    void keyPressEvent(QKeyEvent * event);
    int getisJump(){
        return isJump;
    };
    void setisJump( int x){
        isJump = x;
    }
    int getjumpCount(){
        return jumpCount;
    };
    void setjumpCount( int y){
        jumpCount = y;
    }
public slots:

private:
    bool isJump = 0;
    int jumpCount = 7;
};
#endif // PLAYER_H
