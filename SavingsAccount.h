#ifndef POLYMORPHISM_SAVINGSACCOUNT_H
#define POLYMORPHISM_SAVINGSACCOUNT_H

#include <iostream>
#include <string>
#include "Account.h"

class SavingsAccount : public Account {

//    friend std::ostream &operator<<(std::ostream &os , const SavingsAccount &account);

private:

    static constexpr const char *defaultName = "Unnamed Savings Account";
    static constexpr double defaultBalance = 0.0;
    static constexpr double defaultInterestRate = 0.0;

protected:

    double interestRate;

public:

    SavingsAccount(std::string name = defaultName , double balance = defaultBalance , double interestRate = defaultInterestRate);
    virtual bool withdraw(double amount) override;
    virtual bool deposit(double amount) override;
    void print(std::ostream &os) const override;
    virtual ~SavingsAccount() = default;

};

#endif //POLYMORPHISM_SAVINGSACCOUNT_H