QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    fm_editar.cpp \
    fm_novo.cpp \
    fm_pesquisa.cpp \
    fm_principal.cpp \
    main.cpp \
    janelalogin.cpp

HEADERS += \
    fm_editar.h \
    fm_novo.h \
    fm_pesquisa.h \
    fm_principal.h \
    janelalogin.h

FORMS += \
    fm_editar.ui \
    fm_novo.ui \
    fm_pesquisa.ui \
    fm_principal.ui \
    janelalogin.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
