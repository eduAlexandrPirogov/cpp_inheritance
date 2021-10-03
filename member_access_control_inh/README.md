# Управлением доступом к элементам класса

Элементы управления позволяют разделить интерфейс класса от закрытых деталей 
реализации и защищённых членов, которые используются производными классами. 
Спецификатор доступа действует для всех членов, объявленныъ после него, пока не будет объявлен следующий спецификатор доступа.

Имеем три спецификатора досутпа:
1. public
2. protected
3. private

## Private
Элементы класса, имеющие доступ уровня `private`, становятся доступными только для
функций и членов этого класса, а также для его функций-друзей.
При наследовании,если указан `private`, все члены и методы производного класса
являются закрытыми.

## Protected

Элементы класса, имеющие доступ уровня `protected`, становятся доступными 
для элементов этого класса, для функций-друзей, а также для производных классов.При наследовании, если указан уровень доступа `protected`, все члены и методы производного класса являются защищёнными и доступны для производных от него классов.


## Public

Элеметны класса, имеющий доступ уровня `public`, становятся доступными из любой функции.
При наследовании, если указан уровень доступа `public`, все члены и методы производного класса имеют уровень доступа, соответствующий базовому классу.

Рассмотрим пример. Создадим класс `Base`:
```cpp
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
```

Создадим класс `DerivedClass1` и наследуемся от `Base`, используя спецификатор
доступа `public`:

```cpp
class DerivedClass1 : public Base
{
    public:
    void foo2()
    {
       publicFunc();
       protectedFunc();
    // privateFunc(); Scope Exception 
    };
};
```

Проверим:

```cpp
int main()
{
   Base base{};
   DerivedClass1 derived{};
   base.foo();
   derived.foo();
   return 0;
};
```

Так как модификатор доступа при наследовании мы указали `public`, то 
уровень доступа членов производного класса соответствует базовому классу.

```cpp
publicFunc(). n = 1
protectedFunc()
privateFunc()
publicFunc(). n = 1
protectedFunc()
privateFunc()
```


