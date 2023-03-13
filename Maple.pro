QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    core/edge.cpp \
    core/face.cpp \
    core/mesh.cpp \
    core/transform.cpp \
    core/vertex.cpp \
    globals.cpp \
    glwidget.cpp \
    renderer/renderer.cpp \
    main.cpp \
    maple.cpp \
    renderer/simplerenderer.cpp

HEADERS += \
    core/edge.h \
    core/face.h \
    core/mesh.h \
    core/object.h \
    core/property.h \
    core/transform.h \
    core/types.h \
    core/vertex.h \
    globals.h \
    glwidget.h \
    renderer/renderer.h \
    maple.h \
    renderer/simplerenderer.h

FORMS += \
    maple.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    README.md

DEFINES += "MAPLE_INCLUDE_GLM"
LIBS += -lGL -lGLEW
