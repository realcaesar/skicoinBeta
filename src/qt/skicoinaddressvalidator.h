// Copyright (c) 2011-2014 The Bitcoin Core developers
// Copyright (c) 2014-2020 The Skicoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SKICOIN_QT_SKICOINADDRESSVALIDATOR_H
#define SKICOIN_QT_SKICOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class SkicoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit SkicoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Skicoin address widget validator, checks for a valid skicoin address.
 */
class SkicoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit SkicoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // SKICOIN_QT_SKICOINADDRESSVALIDATOR_H
