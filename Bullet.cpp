#include "Bullet.h"
#include "Start.h"
#include <QGraphicsScene>
#include <QTimer>
#include <QKeyEvent>


extern Game *game; //to use these object, we have to include "Start.h"


Bullet::Bullet(QGraphicsItem *parent): QObject(),QGraphicsPixmapItem(parent)
{
   mytype = -1;
   type = rand()%3;
   switch (type){
      case 0:
         setPixmap(QPixmap(":/images/2_a.png"));
         mytype = 0;
         break;
      case 1:
         setPixmap(QPixmap(":/images/3_a.png"));
         mytype = 1;
         break;
      case 2:
         setPixmap(QPixmap(":/images/4_a.png"));
         mytype = 1;
         break;
   }

    setPos(800,220);

    bulletsound = new QMediaPlayer();
    bulletsound->setMedia(QUrl("qrc:/sounds/Bullet.mp3"));
//    bulletsound->play();

    //connect
    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}


void Bullet::move()
{

    setPos(x()-10,y());
    if( (type==0) && (pos().x() <= 50) ){
        mytype = 0;
        scene()->removeItem(this);
        delete this;
    }

    if ( (type==1) && (pos().x() <= 50) ){
        mytype=1;

        scene()->removeItem(this);
        delete this;
    }

    if ( (type==2) && (pos().x() <= 50) ){
        mytype=2;
        scene()->removeItem(this);
        delete this;        
    }

}

void Bullet::keyPressEvent(QKeyEvent *event)
{
    if( (event->key() == Qt::Key_X)){
         if (bulletsound->state() == QMediaPlayer::PlayingState){
             bulletsound->setPosition(0);
         }
         else if (bulletsound->state() == QMediaPlayer::StoppedState){
             bulletsound->play();
         }
         if(mytype == 0){
             game->score->increase1();
             mytype = -1;
         }

    }

    if( (event->key() == Qt::Key_Z)){
         if (bulletsound->state() == QMediaPlayer::PlayingState){
             bulletsound->setPosition(0);
         }
         else if (bulletsound->state() == QMediaPlayer::StoppedState){
             bulletsound->play();
         }
         if(mytype==1){

            game->score->increase2();
            mytype = -1;
         }
     }

    if( (event->key() == Qt::Key_M)){
        if (bulletsound->state() == QMediaPlayer::PlayingState){
            bulletsound->setPosition(0);
        }
        else if (bulletsound->state() == QMediaPlayer::StoppedState){
            bulletsound->play();
        }
//        if(mytype==2){
            game->score->increase3();
            mytype = -1;
//        }

     }

}
