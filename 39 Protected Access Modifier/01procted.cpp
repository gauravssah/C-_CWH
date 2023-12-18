#include <iostream>
using namespace std;

class Base
{
protected:
    int a = 5;

private:
    int b;
};

class Derived : protected Base
{
public:
    void printA()
    {
        cout << "This is a From Base : " << a << endl;
    }
};

/*
For A protected member:
                      Public Derivation    Private Derivation    Protected Derivation
    1. Private        Not Inherited        Not Inherited         Not Inherited
    2. Protected      Protected            Private               Protected
    3. Public         Public               Private               Protected

*/

int main()
{
    Base b;
    Derived d;
    // cout << d.a << endl; // Will not Work since a is procted in both as well as devived class.
    d.printA(); // printing a from base in derived.

    return 0;
}