#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "Player.h"
#include "Score.h"
#include "Time.h"
#include "Miss.h"



class Game: public QGraphicsView{
public:
    Game(QWidget *parent=0);
    QGraphicsScene *scene;
    Player *player;
    Score *score;
    Time *time;
    Miss *miss;
};

#endif // GAME_H
