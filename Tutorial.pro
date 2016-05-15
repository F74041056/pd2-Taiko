#-------------------------------------------------
#
# Project created by QtCreator 2016-05-07T21:06:48
#
#-------------------------------------------------

QT       += core gui \
         multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Tutorial
TEMPLATE = app


SOURCES += main.cpp \
    Bullet.cpp \
    Game.cpp \
    Score.cpp \
    Player.cpp \
    Start.cpp \
    Final.cpp \
    Time.cpp \
    Miss.cpp

HEADERS  += \
    Bullet.h \
    Game.h \
    Score.h \
    Player.h \
    Start.h \
    Final.h \
    Time.h \
    Miss.h


FORMS    += mainwindow.ui

RESOURCES += \
    res.qrc
