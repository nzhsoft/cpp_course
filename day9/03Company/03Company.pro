TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    employee.cpp \
    technician.cpp \
    manager.cpp \
    salesman.cpp \
    salemanager.cpp

HEADERS += \
    employee.h \
    technician.h \
    manager.h \
    salesman.h \
    salemanager.h
