#-------------------------------------------------
#
# Project created by QtCreator 2013-02-20T07:31:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tradingSystem
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    userwindow.cpp

HEADERS  += mainwindow.h \
    userwindow.h

FORMS    += mainwindow.ui \
    userwindow.ui

RESOURCES += \
    imgs.qrc
