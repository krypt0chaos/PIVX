/// Copyright (c) 2015-2017 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef WALLETBALANCE_H
#define WALLETBALANCE_H

#include "walletmodel.h"

class WalletBalance : public QObject 
{
    Q_OBJECT

public:
    WalletBalance (QObject* parent, WalletModel* model);
    ~WalletBalance ();

    // Getters
    CAmount getBalance ();
    CAmount getUnconfirmedBalance ();
    CAmount getImmatureBalance ();
    CAmount getZerocoinBalance ();
    CAmount getUnconfirmedZerocoinBalance ();
    CAmount getImmatureZerocoinBalance ();
    CAmount getMatureZerocoinBalance ();
    CAmount getWatchOnlyBalance ();
    CAmount getWatchUnconfirmedBalance ();
    CAmount getWatchImmatureBalance ();

    // Setters
    void setBalance (CAmount nBalance);
    void setUnconfirmedBalance (CAmount nUnconfirmedBalance);
    void setImmatureBalance (CAmount nImmatureBalance);
    void setZerocoinBalance (CAmount nZerocoinBalance);
    void setUnconfirmedZerocoinBalance (CAmount nUnconfirmedZerocoinBalance);
    void setImmatureZerocoinBalance (CAmount nImmatureZerocoinBalance);
    void setMatureZerocoinBalance (CAmount nMatureZerocoinBalance);
    void setWatchOnlyBalance (CAmount nWatchOnlyBalance);
    void setWatchUnconfirmedBalance (CAmount nWatchUnconfirmedBalance);
    void setWatchImmatureBalance (CAmount nWatchImmatureBalance);

private:
    CAmount nBalance;
    CAmount nUnconfirmedBalance;
    CAmount nImmatureBalance;
    CAmount nZerocoinBalance;
    CAmount nUnconfirmedZerocoinBalance;
    CAmount nImmatureZerocoinBalance;
    CAmount nMatureZerocoinBalance;
    CAmount nWatchOnlyBalance;
    CAmount nWatchUnconfirmedBalance;
    CAmount nWatchImmatureBalance;
};

#endif /* WALLETBALANCE_H */

