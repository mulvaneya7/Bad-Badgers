#include "qcreateaccount.h"

QCreateAccount::QCreateAccount(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant QCreateAccount::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex QCreateAccount::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex QCreateAccount::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int QCreateAccount::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int QCreateAccount::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant QCreateAccount::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
