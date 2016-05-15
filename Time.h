#ifndef TIME_H
#define TIME_H

#include <QGraphicsTextItem>
#include <QObject>


class Time:/*public QObject, */public QGraphicsTextItem{
    Q_OBJECT
public:
    Time(QGraphicsItem *parent=0);
    int getTime();
public slots:
    void decrease();
private:
    int ttime;
};

#endif // TIME_H
