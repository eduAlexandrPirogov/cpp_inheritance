#pragma once
#include <iostream>

class Base
{
    public:
       void foo();
       void publicFunc();
    protected:
       int n = 0;
       void protectedFunc();
    private:
       void privateFunc();
};

void Base::foo()
{
   publicFunc();
   protectedFunc();
   privateFunc();
};

void Base::publicFunc()
{
   n++;
   std::cout << "publicFunc(). n = " << n << "\n";
};

void Base::protectedFunc()
{
   std::cout << "protectedFunc()\n";
};

void Base::privateFunc()\
{
   std::cout << "privateFunc()\n";
};

