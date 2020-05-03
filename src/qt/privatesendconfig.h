// Copyright (c) 2009-2019 Satoshi Nakamoto
// Copyright (c) 2009-2019 The Bitcoin Developers
// Copyright (c) 2014-2019 The Dash Core Developers
// Copyright (c) 2016-2019 Duality Blockchain Solutions Developers
// Copyright (c) 2017-2020 Bitcreds Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCREDS_QT_PRIVATESENDCONFIG_H
#define BITCREDS_QT_PRIVATESENDCONFIG_H

#include <QDialog>

namespace Ui {
    class PrivatesendConfig;
}
class WalletModel;

/** Multifunctional dialog to ask for passphrases. Used for encryption, unlocking, and changing the passphrase.
 */
class PrivatesendConfig : public QDialog
{
    Q_OBJECT

public:

    PrivatesendConfig(QWidget *parent = 0);
    ~PrivatesendConfig();

    void setModel(WalletModel *model);


private:
    Ui::PrivatesendConfig *ui;
    WalletModel *model;
    void configure(bool enabled, int coins, int rounds);

private Q_SLOTS:

    void clickBasic();
    void clickHigh();
    void clickMax();
};

#endif // BITCREDS_QT_PRIVATESENDCONFIG_H
