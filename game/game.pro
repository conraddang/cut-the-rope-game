QT       += core gui
QT += gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bubble.cpp \
    cutter.cpp \
    environment.cpp \
    fly.cpp \
    main.cpp \
    menu.cpp \
    plant.cpp \
    portal.cpp \
    secportal.cpp \
    spider.cpp \
    threads.cpp \
    trampoline.cpp

HEADERS += \
    Box2D/box2d/box2d.h \
    bubble.h \
    cutter.h \
    environment.h \
    fly.h \
    menu.h \
    plant.h \
    portal.h \
    secportal.h \
    spider.h \
    threads.h \
    trampoline.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32: LIBS += -L$$PWD/./ -lBox2D

INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.

FORMS += \
    environment.ui

