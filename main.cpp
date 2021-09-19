#include <iostream>
#include <memory>
#include <conio.h>
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "TrustAccount.h"
#include "AccountUtil.h"

using namespace std;

int main() {

//    Account frank {"Frank , 5000"};     // shouldn't compile
//    cout << frank << endl;

    Account *trust = new TrustAccount("James");
    cout << *trust << endl;

    Account *p1 = new CheckingAccount("Larry" , 10000);
    Account *p2 = new SavingsAccount("Moe" , 1000);
    Account *p3 = new TrustAccount("Curly");

    vector<Account *> accounts {p1 , p2 , p3};

    display(accounts);

    deposit(accounts , 1000);
    withdraw(accounts , 2000);

    display(accounts);

    delete p1;
    delete p2;
    delete p3;

    getch();
    return 0;
}
