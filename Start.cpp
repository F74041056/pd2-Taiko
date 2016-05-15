#include "Start.h"
#include <QImage>
#include <QGraphicsTextItem>


extern Game *game;

Start::Start(QWidget *parent1):/*QObject(),*/QGraphicsView(parent1)
{
    start_scene = new QGraphicsScene();
    start_scene->setSceneRect(0,0,640,400);
    setBackgroundBrush(QBrush(QImage(":/images/start_bg.jpg")));

    setScene(start_scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(640,400);

    btn1 = new QPushButton("Start",this);
    start_scene->addWidget(btn1);
    btn1->setGeometry(200,300,100,30);
    QObject::connect(btn1,SIGNAL(clicked()),this,SLOT(startTheGame()));


    btn2 = new QPushButton("Quit");
    start_scene->addWidget(btn2);
    btn2->setGeometry(350,300,100,30);
    QObject::connect(btn2,SIGNAL(clicked()),this,SLOT(close()));


    show();
}

void Start::startTheGame()
{
    game = new Game();
    game->show();

    close();
}
