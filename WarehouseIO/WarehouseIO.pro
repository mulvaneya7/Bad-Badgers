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
    createuser.cpp \
    mainprogram.cpp \
    warehouse.cpp \
    date.cpp \
    member.cpp \
    executive.cpp \
    LoginScreen.cpp

HEADERS  += \
    createuser.h \
    mainprogram.h \
    warehouse.h \
    date.h \
    member.h \
    executive.h \
    LoginScreen.h

FORMS    += \
    createuser.ui \
    mainprogram.ui \
    LoginScreen.ui
