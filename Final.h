#ifndef FINAL_H
#define FINAL_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QWidget>
#include <QPushButton>


class Final: public QGraphicsView{
    Q_OBJECT
public:
    Final(QWidget *parent2=0);
    QGraphicsScene *final_scene;
public slots:
    void reStart();
private:
    QPushButton *btn3;
    QPushButton *btn4;
};

#endif // FINAL_H
