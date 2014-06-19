greaterThan(QT_MAJOR_VERSION, 4) {
    QT += widgets designer
}

lessThan(QT_MAJOR_VERSION, 5) {
    CONFIG += designer
}

CONFIG += plugin release

TEMPLATE = lib
TARGET = $$qtLibraryTarget($$TARGET)
target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS += target

INCLUDEPATH += .

# Input
HEADERS += \
    button_and_edit.h \
    button_and_editplugin.h

SOURCES += \
    button_and_edit.cpp \
    button_and_editplugin.cpp


FORMS += \
    button_and_edit.ui
