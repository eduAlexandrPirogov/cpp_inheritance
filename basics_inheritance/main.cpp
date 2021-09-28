#include <iostream>
#include "Animal.h"
#include "Cat.h"

using namespace std;

int main()
{
   Animal a {};
   cout << a.getName() << endl;
   a.voice();
   a.move();
   a.setName("Vasya");

   Cat cat {};
   cout << cat.getName() << endl;
   cat.voice();
   return 0;
};
