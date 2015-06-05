#-------------------------------------------------
#
# Project created by QtCreator 2015-05-07T04:46:33
#
#-------------------------------------------------

QT       += core gui
QT       += phonon

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GameProject
TEMPLATE = app


SOURCES += main.cpp\
        pagewaitting.cpp \
    wiringPi.c \
    pagepassword.cpp \
    pageresult.cpp \
    wiringPiSerial.c \
    pagefinal.cpp

HEADERS  += pagewaitting.h \
    wiringPi.h \
    pagepassword.h \
    pageresult.h \
    wiringPiSerial.h \
    pagefinal.h

FORMS    += pagewaitting.ui \
    pagepassword.ui \
    pageresult.ui \
    pagefinal.ui

LIBS += -L/usr/local/lib -lwiringPi
INCLUDEPATH += /usr/local/include

LIBS += -lphonon

RESOURCES += \
    image/imageGame.qrc
