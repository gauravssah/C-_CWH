#include <iostream>
using namespace std;

/*

Case1:
class B: public A{
    // order of execution of constructor -> first A() then B()
}

Case2:
class A: public B, public C{
    // order of execution of constructor -> B() then B() and A()
}

Case3:
class A: public B, virtual public C{
    // order of execution of constructor -> C() then B() and A()
}

*/

class Base1
{
    int data1;

public:
    Base1(int n)
    {
        data1 = n;
        cout << "Base1 Constructor called." << endl;
    }

    void printBase1Data()
    {
        cout << "The Base1 Data is : " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int n)
    {
        data2 = n;
        cout << "Base2 Constructor called." << endl;
    }

    void printBase2Data()
    {
        cout << "The Base2 Data is : " << data2 << endl;
    }
};

class Derived : public Base2, public Base1
{
    int derivedData1, derivedData2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derivedData1 = c;
        derivedData2 = d;
        cout << "Derived class constructor called." << endl;
    }

    void printDerivedData()
    {
        cout << "derivedData1 : " << derivedData1 << endl;
        cout << "derivedData2 : " << derivedData2 << endl;
    }
};

int main()
{

    Derived DerivedClass(1, 2, 4, 7);
    DerivedClass.printDerivedData();
    DerivedClass.printBase1Data();
    DerivedClass.printBase2Data();

    return 0;
}