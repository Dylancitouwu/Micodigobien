QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Sources/client.cpp \
    Sources/clientDAO.cpp \
    Sources/logic_client.cpp \
    Sources/logic_product.cpp \
    Sources/logic_user.cpp \
    Sources/product.cpp \
    Sources/productDAO.cpp \
    Sources/user.cpp \
    Sources/userDAO.cpp \
    Vista/home.cpp \
    Vista/registerclient.cpp \
    Vista/registerproduct.cpp \
    Vista/registeruser.cpp \
    Vista/viewproducts.cpp \
    main.cpp \
    widget.cpp

HEADERS += \
    Headers/client.h \
    Headers/clientDAO.h \
    Headers/logic_client.h \
    Headers/logic_product.h \
    Headers/logic_user.h \
    Headers/product.h \
    Headers/productDAO.h \
    Headers/user.h \
    Headers/userDAO.h \
    Vista/home.h \
    Vista/registerclient.h \
    Vista/registerproduct.h \
    Vista/registeruser.h \
    Vista/viewproducts.h \
    widget.h

FORMS += \
    Vista/home.ui \
    Vista/registerclient.ui \
    Vista/registerproduct.ui \
    Vista/registeruser.ui \
    Vista/viewproducts.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
