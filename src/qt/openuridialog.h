// Copyright (c) 2009-2019 Satoshi Nakamoto
// Copyright (c) 2009-2019 The Bitcoin Developers
// Copyright (c) 2014-2019 The Dash Core Developers
// Copyright (c) 2016-2019 Duality Blockchain Solutions Developers
// Copyright (c) 2017-2019 Bitcreds Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef CREDITS_QT_OPENURIDIALOG_H
#define CREDITS_QT_OPENURIDIALOG_H

#include <QDialog>

namespace Ui {
    class OpenURIDialog;
}

class OpenURIDialog : public QDialog
{
    Q_OBJECT

public:
    explicit OpenURIDialog(QWidget *parent);
    ~OpenURIDialog();

    QString getURI();

protected Q_SLOTS:
    void accept();

private Q_SLOTS:
    void on_selectFileButton_clicked();

private:
    Ui::OpenURIDialog *ui;
};

#endif // CREDITS_QT_OPENURIDIALOG_H
