//
// Created by Andres on 15/3/2022.
//

#ifndef LAB01_INHERITANCE_XGTX1304X_DERIVED1_H
#define LAB01_INHERITANCE_XGTX1304X_DERIVED1_H
#include "Base.h"

class Derived1 final : public Base {
public:
    Derived1() = default;
    ~Derived1() final = default;
    void doSomething() final;
};


#endif //LAB01_INHERITANCE_XGTX1304X_DERIVED1_H
