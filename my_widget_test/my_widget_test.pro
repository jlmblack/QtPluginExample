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
HEADERS += my_widget.h my_widgetPlugin.h ui_my_widget.h

SOURCES += my_widget.cpp my_widgetPlugin.cpp


FORMS += \
    my_widget.ui
