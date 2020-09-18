TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

#WINDOWS
# put SFML file in the same location as project
LIBS += -L"../SFML-2.5.1/lib" #change this
LIBS += -L"../SFML-2.5.1/bin" #change this

#MAC
#LIBS += -L"/usr/local/lib"

CONFIG(release, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-main -lsfml-system -lsfml-network -lsfml-window
CONFIG(debug  , debug|release): LIBS += -lsfml-audio-d -lsfml-graphics-d -lsfml-main-d -lsfml-system-d -lsfml-network-d -lsfml-window-d

#WINDOWS
INCLUDEPATH += "../SFML-2.5.1/include" #change this
DEPENDPATH += "../SFML-2.5.1/include" #change this


SOURCES += \
        game.cpp \
        main.cpp

DISTFILES += \
    .gitignore \
    Fonts/04b-25.ttf

HEADERS += \
    game.h
