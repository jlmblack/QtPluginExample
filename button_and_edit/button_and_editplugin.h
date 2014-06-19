#ifndef BUTTON_AND_EDITPLUGIN_H
#define BUTTON_AND_EDITPLUGIN_H

#include <QDesignerCustomWidgetInterface>

class Button_and_EditPlugin : public QObject, public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)
#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
    Q_PLUGIN_METADATA(IID "com.ics.Qt.CustomWidgets")
#endif

public:
    Button_and_EditPlugin(QObject* parent=0);

    QString name() const;
    QString group() const;
    QString toolTip() const;
    QString whatsThis() const;
    QString includeFile() const;
    QIcon icon() const;

    bool isContainer() const;

    QWidget *createWidget(QWidget *parent);

private:
    bool initialized;
};


#endif // BUTTON_AND_EDITPLUGIN_H
