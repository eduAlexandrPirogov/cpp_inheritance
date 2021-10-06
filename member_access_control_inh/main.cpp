#include <iostream>
#include "Base.h"
#include "Derived1.h"

using namespace std;

int main()
{
   Base base{};
   DerivedClass1 derived{};
   base.foo();
   derived.foo();
   return 0;
};
