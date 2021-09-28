# Наследование. Базовый уровень

Для наглядной демонстрации, создадим класс класс `Animal`. Структура его следующая:

```cpp
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
```

Создадим пустой класс Cat и наследуемся от класса `Animal`. 

```cpp
class Cat : public Animal
{
   public:
      Cat();
};

```
