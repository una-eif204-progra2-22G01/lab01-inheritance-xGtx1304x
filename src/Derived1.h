//
// Created by Andres on 15/3/2022.
//

#ifndef LAB01_INHERITANCE_XGTX1304X_DERIVED1_H
#define LAB01_INHERITANCE_XGTX1304X_DERIVED1_H
#include "Base.h"

class Derived1 : public Base {
public:
    Derived1() = default;
    ~Derived1() override = default;
    void doSomething() override;
};


#endif //LAB01_INHERITANCE_XGTX1304X_DERIVED1_H
