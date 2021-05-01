#ifndef BALL_H
#define BALL_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>


class Ball:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Ball(QGraphicsItem * parent=0);
public slots:
    void move();


private:

};

#endif // BALL_H
