#include "Final.h"
#include <QImage>
#include <QGraphicsTextItem>
#include "Start.h"
#include "Game.h"
//#include "Score.h"
#include <QGraphicsTextItem>
#include <QFont>


extern Start *start;


Final::Final(QWidget *parent2)
{
    final_scene = new QGraphicsScene();
    final_scene->setSceneRect(0,0,550,401);  //make the scene 800x490
    setBackgroundBrush(QBrush(QImage(":/images/final_bg.jpg")));

    setScene(final_scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(550,401);


//    final_scene->addItem(score);

//    setPlainText(QString("Score: ") );
//    setDefaultTextColor(Qt::blue);
//    setFont(QFont("helvetica",32,QFont::Bold));




    btn3 = new QPushButton("Restart");
    final_scene->addWidget(btn3);
    btn3->setGeometry(150,250,100,30);
    connect(btn3,SIGNAL(clicked()),this,SLOT(reStart()));

    btn4 = new QPushButton("Quit");
    final_scene->addWidget(btn4);
    btn4->setGeometry(300,250,100,30);
    connect(btn4,SIGNAL(clicked()),this,SLOT(close()));

    show();
}

void Final::reStart()
{
    start = new Start();
    start->show();

    close();
}
