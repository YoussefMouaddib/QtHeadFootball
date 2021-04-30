#include "Score.h"
#include <QFont>

Score::Score(QGraphicsItem *parent): QGraphicsTextItem(parent){
    // initialize the score to 0
    score_player1 = 0;
    score_player2 = 0;
    // draw the text
    setPlainText(QString("Score: ") + QString::number(score_player2) + QString(" - ") + QString::number(score_player1));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",16));
}

void Score::increase1(){
    score_player1++;
    setPlainText(QString("Score: ") + QString::number(score_player2) + QString(" - ") + QString::number(score_player1));
}
void Score::increase2(){
    score_player2++;
    setPlainText(QString("Score: ") + QString::number(score_player2) + QString(" - ") + QString::number(score_player1));
}

int Score::getScore(){

        return score;
    }
int Score::getScore1(){

            return score_player1;
}
int Score::getScore2(){
            return score_player2;
}
