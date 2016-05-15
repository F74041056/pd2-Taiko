#include <QApplication>
#include "Start.h"


Start *start;
Game *game;


int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    start = new Start();
    start->show();


    return a.exec();
}
