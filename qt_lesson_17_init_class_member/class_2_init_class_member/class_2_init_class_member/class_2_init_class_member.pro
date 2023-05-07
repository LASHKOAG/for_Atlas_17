TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    myclass.cpp

SUBDIRS += \
    class_2_init_class_member.pro

HEADERS += \
    myclass.h
