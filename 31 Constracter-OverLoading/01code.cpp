#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void printNum()
    {
        cout << "Your Number is : " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1(4, 7);
    c1.printNum();

    // Constractor OverLoading...
    Complex c2(9);
    c2.printNum();

    Complex c3;
    c3.printNum();

    return 0;
}