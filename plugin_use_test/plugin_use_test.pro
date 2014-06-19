#-------------------------------------------------
#
# Project created by QtCreator 2014-06-18T13:05:45
#
#-------------------------------------------------
include([.priファイルの場所へのパス]\my_library.pri)

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = plugin_use_test
TEMPLATE = app

QT += designer

SOURCES += main.cpp\
        mainwindow.cpp

INCLUDEPATH += C:\QtProjects\led-designer-plugin

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
