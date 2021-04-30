#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>

class Score: public QGraphicsTextItem{
public:
    Score(QGraphicsItem * parent=0);
    void increase1();
    void increase2();
    int getScore1();
    int getScore2();
    int getScore();
private:
    int score_player1;
    int score_player2;
    int score;
};

#endif // SCORE_H
