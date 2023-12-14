#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    };

    Number(int x)
    {
        a = x;
    };

    Number(Number &obj)
    {
        cout << "Copy Constructor Called." << endl;

        a = obj.a;
    };

    void printNum()
    {
        cout << "The value of a is : " << a << endl;
    }
};

int main()
{
    Number x, y, z(44), z2;
    x.printNum();
    y.printNum();
    z.printNum();

    Number z1(z); // Copy Constructor Invocked!!
    z1.printNum();

    z2 = z; // copy constructor not called!!
    z2.printNum();

    Number z3 = z; // Copy Constructor Invocked!!
    z3.printNum();
    return 0;
}