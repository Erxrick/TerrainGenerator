#-------------------------------------------------
#
# Project created by QtCreator 2018-10-02T11:42:32
#
#-------------------------------------------------

QT       += core gui opengl widgets 3drender 3dextras

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Terrain_Generator
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11
CONFIG += resources_big


SOURCES += \
        main.cpp \
        mainwindow.cpp \
	glwidget.cpp \
	window_primary.cpp \
	mainmenupage.cpp \
	selectionpage.cpp \
	confirmationpage.cpp \
	completionpage.cpp \
	mystoragebox.cpp \
    cgaldemocode.cpp \
    tiny_obj_loader.cc \
    cgaldemoconvexhullcode.cpp

HEADERS += \
        mainwindow.h \
	glwidget.h \
	mainwindow.h \
	window_primary.h \
	mainmenupage.h \
	selectionpage.h \
	confirmationpage.h \
	completionpage.h \
        mystoragebox.h \
    cgaldemocode.h \
    tiny_obj_loader.h \
    cgaldemoconvexhullcode.h


FORMS += \
        mainwindow.ui \
    window_primary.ui \

INCLUDEPATH += C:/dev/CGAL-4.13/build/include
INCLUDEPATH += C:/dev/CGAL-4.13/include
INCLUDEPATH += C:/local/boost_1_68_0
INCLUDEPATH += C:/dev/CGAL-4.13/auxiliary/gmp/include
INCLUDEPATH += C:/dev/Eigen/



LIBS += -LC:/dev/CGAL-4.13/build/lib
LIBS += -LC:/local/boost_1_68_0/libs
LIBS += -LC:/local/boost_1_68_0/lib32-msvc-12.0
LIBS += -LC:/dev/CGAL-4.13/auxiliary/gmp/lib


LIBS += libopengl32 -lGLU32 -lCGAL-vc140-mt-gd-4.13 -lCGAL_ImageIO-vc140-mt-gd-4.13 -lCGAL_Core-vc140-mt-gd-4.13 -llibgmp-10

#-lboost_thread-vc120-mt-gd-x32-1_68 -lboost_serialization-vc120-mt-gd-x32-1_68 -lboost_date_time-vc120-mt-gd-x32-1_68 -lboost_system-vc120-mt-gd-x32-1_68


QMAKE_CXXFLAGS += -frounding-math -O3
QMAKE_CXXFLAGS += -ftrack-macro-expansion=0


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
