include(../../plugins.pri)

TARGET = $$qtLibraryTarget(guh_devicepluginkodi)

RESOURCES += images.qrc \

SOURCES += \
    devicepluginkodi.cpp \
    kodiconnection.cpp \
    jsonhandler.cpp

HEADERS += \
    devicepluginkodi.h \
    kodiconnection.h \
    jsonhandler.h

