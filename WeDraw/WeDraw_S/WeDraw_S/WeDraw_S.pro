#-------------------------------------------------
#
# Project created by QtCreator 2017-08-27T21:10:24
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WeDraw_S
TEMPLATE = app


SOURCES += main.cpp\
        welcome_wg.cpp \
    sign_widget.cpp

HEADERS  += welcome_wg.h \
    sign_widget.h

FORMS    += welcome_wg.ui \
    sign_widget.ui
