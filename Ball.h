#ifndef BALL_H
#define BALL_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#define STEP_SIZE 5
#define GRAVITY 0.5
#define BOUNCE 0.7
#define XFRICTION 0.01


class Ball:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Ball(QGraphicsItem * parent=0);
public slots:
    void move();


private:
    double dy = STEP_SIZE;
    double dx = STEP_SIZE;
};

#endif // BALL_H
