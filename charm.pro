#-------------------------------------------------
#
# Project created by QtCreator 2016-11-28T18:13:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = charm
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    pwdLineEdit.cpp \
    usrcombobox.cpp

HEADERS  += login.h \
    pwdLineEditt.h \
    usrcombobox.h

FORMS    += login.ui
