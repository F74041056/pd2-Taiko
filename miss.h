#ifndef MISS_H
#define MISS_H

#include <QGraphicsTextItem>

class Miss: public QGraphicsTextItem{
public:
    Miss(QGraphicsItem *parent=0);  //constructor
    void decrease();
    int getMiss();
private:
    int miss;
};

#endif // MISS_H
