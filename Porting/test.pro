QT += quick

SOURCES += \
        main.cpp

resources.files = main.qml 
resources.prefix = /$${TARGET}
RESOURCES += resources

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    python_wrapper.h

INCLUDEPATH = C:\Users\va\AppData\Local\Programs\Python\Python38\include
LIBS += -LC:\Users\va\AppData\Local\Programs\Python\Python38\libs -lpython38

DISTFILES += \
    hello.py
