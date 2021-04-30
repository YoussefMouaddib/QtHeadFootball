#include "Game.h"
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include <QBrush>
#include <QImage>

Game::Game(QWidget *parent){
    // create the scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,475); // make the scene 800x600 instead of infinity by infinity (default)
    setBackgroundBrush(QBrush(QImage(":/new/prefix1/bg.jpg")));

    // make the newly created scene the scene to visualize (since Game is a QGraphicsView Widget,
    // it can be used to visualize scenes)
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,475);

    // create the ball
    ball = new Ball();
    ball->setPos(400,250);
    // add the player to the scene
    scene->addItem(ball);


    // create the player2
    player2 = new Player2();
    player2->setPos(100,400);
    player2->setFlag(QGraphicsItem::ItemIsFocusable);
    player2->setFocus();
    // add the player to the scene
    scene->addItem(player2);

    // create the player
    player = new Player();
    player->setPos(700,400);
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    // add the player to the scene
    scene->addItem(player);

    // Goal nets
    QGraphicsRectItem * rect = new QGraphicsRectItem();
        rect->setRect(788,370,10,100);

        scene->addItem(rect);

    QGraphicsRectItem * rect2 = new QGraphicsRectItem();
            rect2->setRect(1,370,10,100);

            scene->addItem(rect2);




    // create the score/health
    score = new Score();
    scene->addItem(score);

    /*
    if (ball_x = 800) {
        if(375 < ball-y < 300) {
            score_2();
            ballCenter(); // re strat ball from the center
}
}
    */





    show();
}
