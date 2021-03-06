#-------------------------------------------------
#
# Project created by QtCreator 2018-04-01T17:19:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = VehicleControlPredict_Symmetrical
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    mainwindow.cpp \
    main.cpp \
    functions.cpp \
    integrate.cpp \
    qcustomplot.cpp \
    predict.cpp

HEADERS += \
    mainwindow.h \
    include.h \
    DOPRI8_symmetrical.h \
    constants.h \
    functions.h \
    qcustomplot.h \
    vector.h

FORMS += \
        mainwindow.ui

DISTFILES +=

SUBDIRS += \
    VehicleControlPredict_Symmetrical.pro

LIBS += -L/usr/include/gsl -lgsl -lgslcblas -lm
