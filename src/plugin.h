// SPDX-FileCopyrightText: 2025 Enrique M.G. <quique@necos.es>
//
// SPDX-License-Identifier: LGPL-2.1-or-later

#ifndef QML_LLIUREX_GVA_GATE_PLUGIN
#define QML_LLIUREX_GVA_GATE_PLUGIN

#include <QQmlExtensionPlugin>
#include <QObject>
#include <QVariant>
#include <QString>
#include <QList>
#include <QThread>
#include <QVariant>
#include <QJSValue>


class BasePlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA (IID "net.lliurex.gate")

public:
    explicit BasePlugin(QObject *parent = nullptr);
    void registerTypes(const char *uri) override;
};

#endif
