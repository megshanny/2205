QT       += core gui network
QT      +=network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    alphanogo.cpp \
    available.cpp \
    chess.cpp \
    dasan.cpp \
    inputdialog.cpp \
    main.cpp \
    #mainwindow.cpp \
    networkdata.cpp \
    networkserver.cpp \
    networksocket.cpp \
    randomnumbergenerator.cpp \
    #replay.cpp \
    rules.cpp \
    widget.cpp


HEADERS += \
    alphanogo.h \
    available.h \
    chess.h \
    dasan.h \
    inputdialog.h \
    networkdata.h \
    networkserver.h \
    networksocket.h \
    randomnumbergenerator.h \
    #replay.h \
    rules.h \
    widget.h


FORMS += \
    #replay.ui \
    widget.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
