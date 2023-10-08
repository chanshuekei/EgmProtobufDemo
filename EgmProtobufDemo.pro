QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

TARGET = EgmProtobufDemo
TEMPLATE = app
DESTDIR = ./Bin/

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    egm/egm.pb.cc \
    main.cpp \
    egmprotodemo.cpp

HEADERS += \
    egm/egm.pb.h \
    egmprotodemo.h

FORMS += \
    egmprotodemo.ui


INCLUDEPATH += $$PWD/egm/
INCLUDEPATH += $$PWD/protobuf/include/
INCLUDEPATH += $$PWD/protobuf/lib/

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
