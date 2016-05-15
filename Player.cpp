#include "Player.h"
#include <QTimer>
#include <QGraphicsScene>
#include "Bullet.h"
#include <QMediaPlayer>


Player::Player(QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{
    QMediaPlayer *music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/sounds/bgsound.mp3"));
    music->play();
    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(create()));

    timer->start(500);

}


void Player::create()
{
    Bullet *bullet = new Bullet();
    scene()->addItem(bullet);
    bullet->setFlag(QGraphicsItem::ItemIsFocusable);
    bullet->setFocus();

}
