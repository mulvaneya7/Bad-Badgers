#-------------------------------------------------
#
# Project created by QtCreator 2017-02-28T17:52:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WarehouseIO
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    createuser.cpp \
    mainprogram.cpp

HEADERS  += mainwindow.h \
    createuser.h \
    mainprogram.h

FORMS    += mainwindow.ui \
    createuser.ui \
    mainprogram.ui
