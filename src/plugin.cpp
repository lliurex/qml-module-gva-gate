// SPDX-FileCopyrightText: 2025 Enrique M.G. <quique@necos.es>
//
// SPDX-License-Identifier: LGPL-2.1-or-later

#include "plugin.h"

#include <gvagate/libllxgvagate.hpp>

#include <QQmlEngine>
#include <QAbstractItemModel>
#include <QMimeData>

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

Gate::Gate()
{

}

QList<User> Gate::getUsers()
{
    QList<User> tmp;

    return tmp;
}

BasePlugin::BasePlugin(QObject* parent) : QQmlExtensionPlugin(parent)
{
}

void BasePlugin::registerTypes(const char* uri)
{
    qmlRegisterType<User> (uri, 1, 0, "User");
    qmlRegisterType<Gate> (uri, 1, 0, "Gate");
    qmlRegisterAnonymousType<QMimeData>(uri, 1);
    
}
