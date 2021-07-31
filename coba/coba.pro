QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    subscribe.cpp \
    utama.cpp\
    settings.cpp\
    paymentwindow.cpp

HEADERS += \
    mainwindow.h \
    subscribe.h \
    utama.h\
    settings.h\
    paymentwindow.h

FORMS += \
    mainwindow.ui \
    subscribe.ui \
    utama.ui\
    settings.ui\
    paymentwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Gambar/Images.qrc

DISTFILES += \
    ../../6245215-e74b6af3561bd76f7b92b8ee3c71064dfbdde43c/Qt 5 Dark Fusion Palette
