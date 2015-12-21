QT += core
QT -= gui

TARGET = untitled
CONFIG += console
CONFIG -= app_bundle

QMAKE_CXXFLAGS += -std=c++11

TEMPLATE = app

SOURCES += main.cpp \
    Manacker.cpp \
    GeneratorRandomStrings.cpp \
    Palindrome.cpp \
    Hash.cpp \
    SlowN2.cpp \
    SlowN3.cpp \
    CheckTime.cpp \
    PalindromicTree.cpp \
    NodePalindromicTree.cpp \
    AlgoPalindrome.cpp

HEADERS += \
    Palindrome.h \
    Manacker.h \
    Hash.h \
    SlowN2.h \
    SlowN3.h \
    CheckTime.h \
    TestGenerator.h \
    PalindromicTree.h \
    NodePalindromicTree.h \
    AlgoPalindrome.h

