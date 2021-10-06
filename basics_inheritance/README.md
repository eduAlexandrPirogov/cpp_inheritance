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
Теперь, класс `Cat` имеет все поля и методы (кроме private) и мы можем, создав экземпляр класса `Cat`, использовать методы, присущие `Animal`, имеющие доступ `public`.
(`protected` поля и методы недоступны для обращение к ним извне, но доступны внутри класса).

```cpp
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
```
Конструкторы и деструкторы в `C++` не наслеудуются. Но, при создании некоторого класса, имеющий супер-класс, конструктор супер-класса будет вызван ранее, затем только будет вызван
конструктор производного класса. Деструкторы действуют в обратном порядке.
Результат программы 

```
Animal's constructor
Vasya
Animal with name: Vasya do voice
Cat's constructor
TOM
Animal with name: TOM do voice
```

