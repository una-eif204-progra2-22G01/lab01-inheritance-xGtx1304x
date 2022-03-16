#include <iostream>  // allows program to output data to the screen

struct Base {
    virtual void do_something() {}
};

struct Derived1 : public Base {
    virtual void do_something() {
        std::cout << "Derived1!!!" << std::endl;
    }
};

struct Derived2 : public Base {
    virtual void do_something() {
        std::cout << "Derived2!!!" << std::endl;
    }
};

// function main begins program execution
int main(int argc, const char *argv[]) {
    std::cout << "Welcome to the UNA!" << std::endl;

    Derived1 derived1;
    derived1.do_something();

    Derived2 derived2;
    derived2.do_something();

}  // end function main