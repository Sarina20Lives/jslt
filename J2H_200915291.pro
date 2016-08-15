#-------------------------------------------------
#
# Project created by QtCreator 2016-07-28T13:14:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = J2H_200915291
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    filemanage.cpp \
    codeeditor.cpp \
    highlighter.cpp \
    lexico_jslt.cpp \
    sintactico_jslt.cpp \
    arboljslt.cpp \
    nodojslt.cpp

HEADERS  += mainwindow.h \
    filemanage.h \
    codeeditor.h \
    highlighter.h \
    lexico_jslt.h \
    sintactico_jslt.h \
    sintactico_jslt.y \
    lexico_jslt.l \
    nodojslt.h

FORMS    += mainwindow.ui

RESOURCES += \
    fileresources.qrc

DISTFILES +=
