#pragma once
#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Cat : public Animal
{
   public:
      Cat();
};

Cat::Cat() : Animal() {this->name = "Nameless cat"; };
