#include "my_widgetplugin.h"
#include "my_widget.h"

#include <QtPlugin>

my_widgetPlugin::
my_widgetPlugin(QObject* parent) :
    QObject(parent),
    initialized(false)
{
}

QString my_widgetPlugin::
name() const
{
    return "my_widget";
}

QString my_widgetPlugin::
group() const
{
    return tr("ICS Custom Widgets");
}

QString my_widgetPlugin::
toolTip() const
{
    return tr("An my_widget");
}

QString my_widgetPlugin::
whatsThis() const
{
    return tr("An my_widget");
}

QString my_widgetPlugin::
includeFile() const
{
    return "my_widget.h";
}

QIcon my_widgetPlugin::
icon() const
{
    return QIcon();
}


bool my_widgetPlugin::
isContainer() const
{
    return false;
}

QWidget * my_widgetPlugin::
createWidget(QWidget *parent)
{
    return new my_widget(parent);
}

#if QT_VERSION < QT_VERSION_CHECK(5,0,0)
Q_EXPORT_PLUGIN2(my_widgetplugin, my_widgetPlugin)
#endif
