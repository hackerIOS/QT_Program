#-------------------------------------------------
#
# Project created by QtCreator 2017-08-28T10:54:53
#
#-------------------------------------------------

QT       += core gui
QT       += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WeDraw_C
TEMPLATE = app


SOURCES += main.cpp\
        welcome_widget.cpp \
    draw_widget.cpp \
    sign_widget.cpp

HEADERS  += welcome_widget.h \
    sign_widget.h \
    draw_widget.h

FORMS    += welcome_widget.ui \
    sign_widget.ui \
    draw_widget.ui
