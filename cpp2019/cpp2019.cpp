#include "pch.h"

    class Base {};
    class Derived1 : public virtual Base {}; // to avoid diamond pattern in real code
    class Derived2 : public Base {}; 

    struct S1 {
        int i;
        void(Derived1::*func)(); // warning C4121 - see below for full text
    };

    struct S2 {
        int i;
        void(Derived2::*func)();  // no warning
    };

    int main()
    {

    }

// r:\cpp2019\cpp2019\cpp2019.cpp(9) : warning C4121 : 'S1' : alignment of a member was sensitive to packing
