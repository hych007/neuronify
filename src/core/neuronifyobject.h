#ifndef NEURONIFYOBJECT_H
#define NEURONIFYOBJECT_H

#include <QObject>
#include <QQmlListProperty>
#include <QQuickItem>

#include "../io/propertygroup.h"

class NeuronifyObject : public QQuickItem
{
    Q_OBJECT
    Q_PROPERTY(QQmlListProperty<PropertyGroup> savedProperties READ savedProperties)

public:
    explicit NeuronifyObject(QQuickItem *parent = 0);

    QQmlListProperty<PropertyGroup> savedProperties()
    {
        return QQmlListProperty<PropertyGroup>(this, m_savedProperties);
    }

    void addSavedPropertyGroup(PropertyGroup *propertyGroup);

signals:

public slots:

private:
    QList<PropertyGroup*> m_savedProperties;
};

#endif // NEURONIFYOBJECT_H
