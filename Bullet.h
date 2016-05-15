#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QMediaPlayer>

class Bullet: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Bullet(QGraphicsItem *parent=0);
    void keyPressEvent(QKeyEvent *event);
public slots:
    void move();  
private:
    QMediaPlayer *bulletsound;
    int type;
    int mytype;

};

#endif // BULLET_H
