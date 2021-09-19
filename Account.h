#ifndef POLYMORPHISM_ACCOUNT_H
#define POLYMORPHISM_ACCOUNT_H

#include <iostream>
#include <string>
#include "IPrintable.h"

class Account : public IPrintable {

//    friend std::ostream &operator<<(std::ostream &os , const Account &account);

private:

    static constexpr const char *defaultName = "Unnamed Account";
    static constexpr double defaultBalance = 0.0;

protected:

    std::string name;
    double balance;

public:

    Account(std::string name = defaultName , double balance = defaultBalance);
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    void print(std::ostream &os) const override;
    virtual ~Account() = default;

};

#endif //POLYMORPHISM_ACCOUNT_H