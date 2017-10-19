// Copyright (c) 2015-2017 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "walletbalance.h"
#include "walletmodel.h"

WalletBalance::WalletBalance(QObject* parent, WalletModel* model) 
{
    if(model) {
printf("XX42: nBalance in constructor set to %ld\n", nBalance);
        nBalance = model->getBalance();
        nUnconfirmedBalance = model->getUnconfirmedBalance();
        nImmatureBalance = model->getImmatureBalance();
        nZerocoinBalance = model->getZerocoinBalance();
        nUnconfirmedZerocoinBalance = model->getUnconfirmedZerocoinBalance();
        nImmatureZerocoinBalance = model->getImmatureZerocoinBalance();
        nMatureZerocoinBalance = model->getMatureZerocoinBalance();
        nWatchOnlyBalance = model->getWatchBalance();
        nWatchUnconfirmedBalance = model->getWatchUnconfirmedBalance();
        nWatchImmatureBalance = model->getWatchImmatureBalance();
    }
    else {
        nBalance = 0;
printf("XX42: nBalance in constructor initialized to %ld\n", nBalance);
        nUnconfirmedBalance = 0;
        nImmatureBalance = 0;
        nZerocoinBalance = 0;
        nUnconfirmedZerocoinBalance = 0;
        nImmatureZerocoinBalance = 0;
        nMatureZerocoinBalance = 0;
        nWatchOnlyBalance = 0;
        nWatchUnconfirmedBalance = 0;
        nWatchImmatureBalance = 0;
    }
}

WalletBalance::~WalletBalance() {
}

// Getters
CAmount WalletBalance::getBalance () { 
printf("XX42: nBalance in getBalance got in %ld\n", nBalance);
    return this->nBalance; 
}
CAmount WalletBalance::getUnconfirmedBalance () { return this->nUnconfirmedBalance; }
CAmount WalletBalance::getImmatureBalance () { return this->nImmatureBalance; }
CAmount WalletBalance::getZerocoinBalance () { return this->nZerocoinBalance; }
CAmount WalletBalance::getUnconfirmedZerocoinBalance () { return this->nUnconfirmedZerocoinBalance; }
CAmount WalletBalance::getImmatureZerocoinBalance () { return this->nImmatureZerocoinBalance; }
CAmount WalletBalance::getMatureZerocoinBalance () { return this->nMatureZerocoinBalance; }
CAmount WalletBalance::getWatchOnlyBalance () { return this->nWatchOnlyBalance; }
CAmount WalletBalance::getWatchUnconfirmedBalance () { return this->nWatchUnconfirmedBalance; }
CAmount WalletBalance::getWatchImmatureBalance () { return this->nWatchImmatureBalance; }

// Setters
void WalletBalance::setBalance (CAmount nBalance) { 
    this->nBalance = nBalance; 
printf("XX42: nBalance in setBalance set in %ld\n", nBalance);
}
void WalletBalance::setUnconfirmedBalance (CAmount nUnconfirmedBalance) { this->nUnconfirmedBalance = nUnconfirmedBalance; }
void WalletBalance::setImmatureBalance (CAmount nImmatureBalance) { this->nImmatureBalance = nImmatureBalance; }
void WalletBalance::setZerocoinBalance (CAmount nZerocoinBalance) { this->nZerocoinBalance = nZerocoinBalance; }
void WalletBalance::setUnconfirmedZerocoinBalance (CAmount nUnconfirmedZerocoinBalance) { this->nUnconfirmedZerocoinBalance = nUnconfirmedZerocoinBalance; }
void WalletBalance::setImmatureZerocoinBalance (CAmount nImmatureZerocoinBalance) { this->nImmatureZerocoinBalance = nImmatureZerocoinBalance; }
void WalletBalance::setMatureZerocoinBalance (CAmount nMatureZerocoinBalance) { this->nMatureZerocoinBalance = nMatureZerocoinBalance; }
void WalletBalance::setWatchOnlyBalance (CAmount nWatchOnlyBalance) { this->nWatchOnlyBalance = nWatchOnlyBalance; }
void WalletBalance::setWatchUnconfirmedBalance (CAmount nWatchUnconfirmedBalance) { this->nWatchUnconfirmedBalance = nWatchUnconfirmedBalance; }
void WalletBalance::setWatchImmatureBalance (CAmount nWatchImmatureBalance) { this->nWatchImmatureBalance = nWatchImmatureBalance; }