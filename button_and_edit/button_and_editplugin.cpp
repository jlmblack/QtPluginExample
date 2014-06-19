#include "Button_and_Editplugin.h"
#include "Button_and_Edit.h"

#include <QtPlugin>

Button_and_EditPlugin::
Button_and_EditPlugin(QObject* parent) :
    QObject(parent),
    initialized(false)
{
}

QString Button_and_EditPlugin::
name() const
{
    return "Button_and_Edit";
}

QString Button_and_EditPlugin::
group() const
{
    return tr("ICS Custom Widgets");
}

QString Button_and_EditPlugin::
toolTip() const
{
    return tr("An Button_and_Edit");
}

QString Button_and_EditPlugin::
whatsThis() const
{
    return tr("An Button_and_Edit");
}

QString Button_and_EditPlugin::
includeFile() const
{
    return "Button_and_Edit.h";
}

QIcon Button_and_EditPlugin::
icon() const
{
    return QIcon();
}


bool Button_and_EditPlugin::
isContainer() const
{
    return false;
}

QWidget * Button_and_EditPlugin::
createWidget(QWidget *parent)
{
    return new Button_and_Edit(parent);
}

#if QT_VERSION < QT_VERSION_CHECK(5,0,0)
Q_EXPORT_PLUGIN2(Button_and_Editplugin, Button_and_EditPlugin)
#endif

