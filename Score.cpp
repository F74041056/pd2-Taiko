#include "Score.h"
#include <QFont>

Score::Score(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    //initialize the score to 0
    score = 0;

    //draw the text
    setPlainText(QString("Score: ") + QString::number(score)); //Score: 0
    setDefaultTextColor(Qt::blue);
    setFont(QFont("helvetica",32,QFont::Bold));
}

void Score::increase1()
{
    score=score+25;
    setPlainText(QString("Score: ") + QString::number(getScore()));
}

void Score::increase2()
{
    score=score+50;
    setPlainText(QString("Score: ") + QString::number(getScore()));
}

void Score::increase3()
{
    score=score+75;
    setPlainText(QString("Score: ") + QString::number(getScore()));
}

int Score::getScore()
{
    return score;
}
