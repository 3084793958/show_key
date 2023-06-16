QT += core gui widgets x11extras
LIBS += -lX11  -lXtst
TEMPLATE = lib
CONFIG += plugin
TARGET = ShowKey

HEADERS += \
    keyscan.h \
    informationwidget.h \
    showkeyplugin.h

SOURCES += \
    keyscan.cpp \
    informationwidget.cpp \
    showkeyplugin.cpp

DISTFILES += \
    showkey.json
