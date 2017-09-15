#include "qmlplugin_plugin.h"
#include "myitem.h"

#include <qdeclarative.h>

void QmlPluginPlugin::registerTypes(const char *uri)
{
    // @uri com.mycompany.qmlcomponents
    qmlRegisterType<MyItem>(uri, 1, 0, "MyItem");
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(QmlPlugin, QmlPluginPlugin)
#endif

