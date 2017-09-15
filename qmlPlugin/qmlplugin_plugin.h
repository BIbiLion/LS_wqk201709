#ifndef QMLPLUGIN_PLUGIN_H
#define QMLPLUGIN_PLUGIN_H

#include <QDeclarativeExtensionPlugin>

class QmlPluginPlugin : public QDeclarativeExtensionPlugin
{
    Q_OBJECT
#if QT_VERSION >= 0x050000
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")
#endif

public:
    void registerTypes(const char *uri);
};

#endif // QMLPLUGIN_PLUGIN_H

