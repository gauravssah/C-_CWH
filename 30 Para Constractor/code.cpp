#include <iostream>
using namespace std;

class Constructor
{
    int a, b;

public:
    Constructor(int, int);
    // Constructor(int a, int b);

    void printNum()
    {
        cout << "The number is : " << a << " + " << b << "i" << endl;
    }
};

Constructor ::Constructor(int x, int y) // This is a parameterized constructor, as it accepts 2 parameters.
{
    a = x;
    b = y;
};

int main()
{
    // Implicit Call
    Constructor c1(2, 4);
    c1.printNum();

    // Explicit Call
    Constructor c2 = Constructor(6, 5);
    c2.printNum();

    return 0;
}