#ifndef SHOWKEYPLUGIN_H
#define SHOWKEYPLUGIN_H

#include<dde-dock/pluginsiteminterface.h>
#include<QObject>
#include<informationwidget.h>
class ShowKeyPlugin : public QObject, PluginsItemInterface
{
    Q_OBJECT
    Q_INTERFACES(PluginsItemInterface)
    Q_PLUGIN_METADATA(IID "com.deepin.dock.PluginsItemInterface" FILE "showkey.json")
public:
    explicit ShowKeyPlugin(QObject *parent = nullptr);
    const QString pluginName() const override;
    void init(PluginProxyInterface *proxyInter) override;
    QWidget *itemWidget(const QString &itemKey) override;
private:
    InformationWidget *m_pluginWidget;
};

#endif // SHOWKEYPLUGIN_H
