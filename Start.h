#ifndef START_H
#define START_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QPushButton>
#include "Game.h"


class Start:/*public QObject,*/public QGraphicsView{
    Q_OBJECT
public:
    Start(QWidget *parent1=0);
    QGraphicsScene *start_scene;
public slots:
    void startTheGame();
private:
    QPushButton *btn1;
    QPushButton *btn2;
};

#endif // START_H
