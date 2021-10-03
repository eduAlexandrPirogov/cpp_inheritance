#pragma once
#include "Base.h"

class Derived2 : protected Base
{
   public:
       void foo2()
       {
          publicFunc();
          protectedFunc();
          //privateFunc(); Scopre Exception
       };
};
