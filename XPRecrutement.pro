TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        src/Article.cpp \
        src/Game.cpp \
        src/TexturesManager.cpp \
        src/main.cpp

DISTFILES += \
    README.md

# SFML Lorenzo
win32:LIBS+=-LD:/Qt/SFML-2.5.1/lib/ -lsfml-main -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-network -lsfml-system
win32:INCLUDEPATH = D:/Qt/SFML-2.5.1/include

# SFML Titouan
unix:LIBS += -L"/usr/lib"
unix:CONFIG(release, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-network -lsfml-window -lsfml-system
unix:CONFIG(debug, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-network -lsfml-window -lsfml-system
unix:INCLUDEPATH += "/usr/include/SFML/"
unix:DEPENDPATH += "/usr/include/SFML/"

HEADERS += \
    src/Article.h \
    src/Game.h \
    src/TexturesManager.h \
    src/Game.h
