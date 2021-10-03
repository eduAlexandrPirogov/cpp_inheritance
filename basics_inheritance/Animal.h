#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal
{
   public:
      Animal();
      Animal(string name);
      Animal(string name, int x, int y);
      void move();
      void voice();
      void setName(string name);
      string getName();
      int getPosition();
   protected:
      string name;
      int xPosition;
   private:
      int getIncrementedXPosition();
};

Animal::Animal()
{
   name = "Nameless";
   xPosition = 0;
};

Animal::Animal(string name) : name(name) 
{
    xPosition = 0;
};

Animal::Animal(string name, int x, int y) : name(name),
      xPosition(x){};

void Animal::move(){ this->xPosition++;};

void Animal::voice() { cout << typeid(this).name() << " with name: " <<  getName() << " do voice\n"; };

void Animal::setName(string name){ this->name = name;};

string Animal::getName(){ return this->name; };

int Animal::getPosition() { return this->xPosition; };

int Animal::getIncrementedXPosition() {return this->xPosition+1;};
