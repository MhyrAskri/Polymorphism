#include "TrustAccount.h"

TrustAccount::TrustAccount(std::string name, double balance, double interestRate)
: SavingsAccount {name, balance, interestRate} , numWithdrawals {0} {

}

// deposit additional $50 bonus when amount >= $5000
bool TrustAccount::deposit(double amount) {

    if (amount >= bonusThreshold) {

        amount += bonusAmount;

    }
    return SavingsAccount::deposit(amount);

}

// only allowed 3 withdrawals, each can be up to a maximum of 20% of the account's value
bool TrustAccount::withdraw(double amount) {

    if ((numWithdrawals >= maxWithdrawals) || (amount > balance * maxWithdrawPercent)) {

        return false;

    } else {

        ++numWithdrawals;
        return SavingsAccount::withdraw(amount);

    }

}

void TrustAccount::print(std::ostream &os) const {

    os.precision(2);
    os << std::fixed;
    os << "[ Trust Account: " << name << ": " << balance << " , " << interestRate << "% , withdrawals: " << numWithdrawals << " ]";

}

//std::ostream &operator<<(std::ostream &os, const TrustAccount &account) {
//
//    os << "[ Trust Account: " << account.name << ": " << account.balance << " , " << account.interestRate << "% , withdrawals: " << account.numWithdrawals << " ]";
//    return os;
//
//}
