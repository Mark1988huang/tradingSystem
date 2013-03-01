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
    userwindow.cpp \
    adminwindow.cpp \
    inventorywindow.cpp

HEADERS  += mainwindow.h \
    userwindow.h \
    adminwindow.h \
    inventorywindow.h \
    apue.h \
    apue_db.h

FORMS    += mainwindow.ui \
    userwindow.ui \
    adminwindow.ui \
    inventorywindow.ui

RESOURCES += \
    imgs.qrc \
    data.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/libs/release/ -lapue
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/libs/debug/ -lapue
else:unix: LIBS += -L$$PWD/libs/ -lapue

INCLUDEPATH += $$PWD/libs
DEPENDPATH += $$PWD/libs

win32:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/libs/release/apue.lib
else:win32:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/libs/debug/apue.lib
else:unix: PRE_TARGETDEPS += $$PWD/libs/libapue.a

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/libs/release/ -lapue_db
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/libs/debug/ -lapue_db
else:unix: LIBS += -L$$PWD/libs/ -lapue_db

INCLUDEPATH += $$PWD/libs
DEPENDPATH += $$PWD/libs

win32:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/libs/release/apue_db.lib
else:win32:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/libs/debug/apue_db.lib
else:unix: PRE_TARGETDEPS += $$PWD/libs/libapue_db.a
