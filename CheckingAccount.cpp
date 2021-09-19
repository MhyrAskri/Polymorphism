#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(std::string name, double balance)
    : Account {name, balance} {

}

bool CheckingAccount::withdraw(double amount) {

    amount += perCheckFee;
    return Account::withdraw(amount);

}

bool CheckingAccount::deposit(double amount) {

    return Account::deposit(amount);

}

void CheckingAccount::print(std::ostream &os) const {

    os.precision(2);
    os << std::fixed;
    os << "[ CheckingAccount: " << name << ": " << balance << " ]";

}

//std::ostream &operator<<(std::ostream &os, const CheckingAccount &account) {
//
//    os << "[ CheckingAccount: " << account.name << ": " << account.balance << " ]";
//    return os;
//
//}