TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        baseclass.cpp \
        derived.cpp \
        main.cpp

HEADERS += \
    baseclass.h \
    derived.h
