TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    animal.cpp \
    dog.cpp \
    cat.cpp

HEADERS += \
    animal.h \
    dog.h \
    cat.h
