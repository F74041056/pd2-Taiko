#include "Game.h"
#include <QImage>
#include <QGraphicsTextItem>



Game::Game(QWidget *parent)
{
    //create the scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);  //make the scene 800x490
    setBackgroundBrush(QBrush(QImage(":/images/bg.png")));  //set background picture

    //make the newly created scene the scene to visualize
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);


    //create the player
    player = new Player();
    player->setPos(700,130);
    scene->addItem(player);
    //make the player focusable and set it to be the current focus
//    player->setFlag(QGraphicsItem::ItemIsFocusable);
//    player->setFocus();


    //create the score
    score = new Score();
    scene->addItem(score);

    time = new Time();
    time->setPos(time->x()+600,time->y());
    scene->addItem(time);


    miss = new Miss();
    miss->setPos(miss->x()+250,miss->y());
    scene->addItem(miss);


    show();
}


