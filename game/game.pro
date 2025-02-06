QT       += core gui
QT += gui
QT += multimedia multimediawidgets

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
    audio.cpp \
    cutter.cpp \
    environment.cpp \
    fly.cpp \
    gameover.cpp \
    level_1.cpp \
    level_2.cpp \
    level_3.cpp \
    level_4.cpp \
    level_5.cpp \
    levelbase.cpp \
    levelwindow.cpp \
    main.cpp \
    plant.cpp \
    portal.cpp \
    ranking.cpp \
    rectangleBody.cpp \
    score.cpp \
    settingwindow.cpp \
    spider.cpp \
    spiderThread.cpp \
    startwindow.cpp \
    trampoline.cpp \
    web.cpp \
    win.cpp

HEADERS += \
    Box2D/box2d/box2d.h \
    audio.h \
    cutter.h \
    environment.h \
    fly.h \
    gameover.h \
    level_1.h \
    level_2.h \
    level_3.h \
    level_4.h \
    level_5.h \
    levelbase.h \
    levelwindow.h \
    plant.h \
    portal.h \
    ranking.h \
    rectangleBody.h \
    score.h \
    settingwindow.h \
    spider.h \
    spiderThread.h \
    startwindow.h \
    trampoline.h \
    web.h \
    win.h


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


###--- MAC Pro File
#macx: LIBS += -L$$PWD/lib_win_mac/ -lBox2D

#INCLUDEPATH += $$PWD/.
#DEPENDPATH += $$PWD/.

#macx: PRE_TARGETDEPS += $$PWD/lib_win_mac/libBox2D.a

###-- Windows Pro File


win32: LIBS += -L$$PWD/lib_win_mac/ -lBox2D

INCLUDEPATH += $$PWD/.
INCLUDEPATH += $$PWD/Box2D/.
DEPENDPATH += $$PWD/.

FORMS += \
    environment.ui \
    gameover.ui \
    levelbase.ui \
    levelwindow.ui \
    ranking.ui \
    settingwindow.ui \
    startwindow.ui \
    win.ui

RESOURCES += \
    resource.qrc

RESOURCES +=

RESOURCES += \
    images.qrc

unix:!macx: LIBS += -L$$PWD/lib_linux/ -lBox2D

#INCLUDEPATH += $$PWD/lib_linux
#DEPENDPATH += $$PWD/lib_linux

unix:!macx: PRE_TARGETDEPS += $$PWD/lib_linux/libBox2D.a
