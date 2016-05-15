#include "Time.h"
#include <QFont>
#include <QTimer>
#include "Game.h"
#include "Final.h"



extern Game *game;

Time::Time(QGraphicsItem *parent):/* QObject(),*/QGraphicsTextItem(parent)
{
    //initialize the score to 0
    ttime = 30;

    //draw the text
    setPlainText(QString("Time: ") + QString::number(getTime())); //Score: 0
    setDefaultTextColor(Qt::blue);
    setFont(QFont("helvetica",32,QFont::Bold));

    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(decrease()));

    timer->start(1000);



}

void Time::decrease()
{
    ttime--;
    if(ttime >=0){
       setPlainText(QString("Time: ") + QString::number(getTime()));
    }

    if(ttime == 0){
        game->close();
        Final *final = new Final();
        final->show();
    }

}

int Time::getTime()
{
    return ttime;
}
