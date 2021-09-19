#ifndef POLYMORPHISM_CHECKINGACCOUNT_H
#define POLYMORPHISM_CHECKINGACCOUNT_H

#include <iostream>
#include <string>
#include "Account.h"

class CheckingAccount : public Account {

//    friend std::ostream &operator<<(std::ostream &os , const CheckingAccount &account);

private:

    static constexpr const char *defaultName = "Unnamed Checking Account";
    static constexpr double defaultBalance = 0.0;
    static constexpr double perCheckFee = 1.5;

public:

    CheckingAccount(std::string name = defaultName , double balance = defaultBalance);
    virtual bool withdraw(double amount) override;
    virtual bool deposit(double amount) override;
    void print(std::ostream &os) const override;
    virtual ~CheckingAccount() = default;

};

#endif //POLYMORPHISM_CHECKINGACCOUNT_H