#include <iostream>
#include "Animal.h"
#include "Cat.h"

using namespace std;

int main()
{
   Animal a {};
   a.setName("Vasya");
   cout << a.getName() << endl;
   a.voice();

   Cat cat {};
   cat.setName("TOM");
   cout << cat.getName() << endl;
   cat.voice();
   return 0;
};
