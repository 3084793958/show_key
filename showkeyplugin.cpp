#include "showkeyplugin.h"

ShowKeyPlugin::ShowKeyPlugin(QObject *parent)
    : QObject(parent)
{

}
const QString ShowKeyPlugin::pluginName() const
{
    return QStringLiteral("Show_key");
}
void ShowKeyPlugin::init(PluginProxyInterface *proxyInter)
{
    m_proxyInter=proxyInter;
    m_pluginWidget=new InformationWidget;
    m_proxyInter->itemAdded(this,pluginName());
}
QWidget *ShowKeyPlugin::itemWidget(const QString &itemKey)
{
    Q_UNUSED(itemKey);
    return m_pluginWidget;
}
