// Copyright (c) 2011-2014 The Bitcoin Core developers
// Copyright (c) 2014-2020 The Skicoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SKICOIN_QT_COINCONTROLTREEWIDGET_H
#define SKICOIN_QT_COINCONTROLTREEWIDGET_H

#include <QKeyEvent>
#include <QTreeWidget>

class CoinControlTreeWidget : public QTreeWidget
{
    Q_OBJECT

public:
    explicit CoinControlTreeWidget(QWidget *parent = 0);

protected:
    virtual void keyPressEvent(QKeyEvent *event) override;
};

#endif // SKICOIN_QT_COINCONTROLTREEWIDGET_H
