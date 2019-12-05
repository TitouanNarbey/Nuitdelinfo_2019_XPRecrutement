TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        src/main.cpp

DISTFILES += \
    README.md

# SFML Lorenzo
#LIBS+=-LD:/Qt/SFML-2.5.1/lib/ -lsfml-main -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-network -lsfml-system
#INCLUDEPATH = D:/Qt/SFML-2.5.1/include

# SFML Titouan
LIBS += -L"/usr/lib"
CONFIG(release, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-network -lsfml-window -lsfml-system
CONFIG(debug, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-network -lsfml-window -lsfml-system
INCLUDEPATH += "/usr/include/SFML/"
DEPENDPATH += "/usr/include/SFML/"
