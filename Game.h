#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "Player.h"
#include "Player2.h"
#include "Score.h"
#include "Ball.h"

class Game: public QGraphicsView{
public:
    Game(QWidget * parent=0);

    QGraphicsScene * scene;
    Player * player;
    Player2 * player2;
    Ball * ball;
    Score * score;


};

#endif // GAME_H
