#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(std::string name, double balance, double interestRate)
    : Account {name , balance} , interestRate {interestRate} {

}

bool SavingsAccount::withdraw(double amount) {

    return Account::withdraw(amount);

}

bool SavingsAccount::deposit(double amount) {

    amount += amount * (interestRate / 100);
    return Account::deposit(amount);

}

void SavingsAccount::print(std::ostream &os) const {

    os.precision(2);
    os << std::fixed;
    os << "[ SavingsAccount: " << name << ": " << balance << " , " << interestRate << " ]";

}

//std::ostream &operator<<(std::ostream &os, const SavingsAccount &account) {
//
//    os << "[ SavingsAccount: " << account.name << ": " << account.balance << account.interestRate << " ]";
//    return os;
//
//}