TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    ccapplicationprotocol.cpp \
    ccapplication.cpp \
    appdelegate.cpp

HEADERS += \
    ccapplicationprotocol.h \
    ccapplication.h \
    appdelegate.h
