#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise Ho aap?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    { // Ambiguity Resolution in Inheritance
        // Base1::greet();
        Base2::greet();
    }
};

int main()
{

    // Ambiguity (1)
    Base1 baseObj1;
    baseObj1.greet();
    Base2 baseObj2;
    baseObj2.greet();
    Derived d;
    d.greet(); // Ambiguity Resolution in Inheritance
    return 0;
}