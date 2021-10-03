#pragma once
#include "Base.h"

class DerivedClass1 : public Base
{
    int n = 5;
    public:
    void foo2()
    {
        Base::n+= 500;
       publicFunc();
       protectedFunc();
    //  privateFunc(); Scope Exception 
    };
};
