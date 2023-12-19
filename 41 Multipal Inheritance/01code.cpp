#include <iostream>
using namespace std;

// Syntex of Multipal inheritance.

// class Derived : visibility - mode Base1, vidibility - mode base2, ...OR V Class....
// {
//     // class body of class "devived"
// }

// ------------------->

class Base1
{
protected:
    int base1int;

public:
    void setBase1int(int n)
    {
        base1int = n;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void setBase2int(int n)
    {
        base2int = n;
    }
};

class Base3
{
protected:
    int base3int;

public:
    void setBase3int(int n)
    {
        base3int = n;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show(void)
    {
        cout << "The Value of Base1 is : " << base1int << endl;
        cout << "The Value of Base2 is : " << base2int << endl;
        cout << "The Value of Base3 is : " << base3int << endl;
        cout << "The sum of Base1 and Base2 is : " << base1int + base2int + base3int << endl;
    }
};

/*
The inherited derived class will look something like this:

Data Members:
        base1int ---> procted;
        base2int ---> procted;
        base3int ---> procted;

Member function:
        setBase1int() ---> public;
        setBase2int() ---> public;
        setBase3int() ---> public;
        show()        ---> public;

*/

int main()
{
    Derived bs;
    bs.setBase1int(5);
    bs.setBase2int(8);
    bs.setBase3int(4);
    bs.show();

    return 0;
}