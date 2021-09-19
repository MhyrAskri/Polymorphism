#ifndef POLYMORPHISM_IPRINTABLE_H
#define POLYMORPHISM_IPRINTABLE_H

#include <iostream>

class IPrintable {

    friend std::ostream &operator<<(std::ostream &os , const IPrintable &obj);

public:

    virtual void print(std::ostream &os) const = 0;
    virtual ~IPrintable() = default;

};

#endif //POLYMORPHISM_IPRINTABLE_H