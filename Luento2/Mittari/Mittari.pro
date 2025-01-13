TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        dht.cpp \
        lcd.cpp \
        main.cpp \
        mittari.cpp

HEADERS += \
    dht.h \
    lcd.h \
    mittari.h
