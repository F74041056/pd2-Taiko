#include "Miss.h"
#include <QFont>

Miss::Miss(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    //initialize the score to 0
    miss = 0;

    //draw the text
    setPlainText(QString("Miss: ") + QString::number(miss));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("helvetica",32,QFont::Bold));
}

void Miss::decrease()
{
    miss++;
    setPlainText(QString("Miss: ") + QString::number(miss));
}

int Miss::getMiss()
{
    return miss;
}
