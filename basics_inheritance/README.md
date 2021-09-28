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

Класс Cat имеет все поля и методы (кроме private).

```cpp
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
```
Результат программы 

```
Nameless animal
Animal do voice 
Nameless cat
Animal do voice
```

