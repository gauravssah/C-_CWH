#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    };
    friend Complex sumComplex(Complex o1, Complex o2);
    void printNumber()
    {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    };
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    // cout << o1.a << endl;
    // cout << o2.a << endl;
    // cout << o1.b << endl;
    // cout << o2.b << endl;
    return o3;
}

int main()
{
    Complex num1, num2, sum;
    num1.setNumber(4, 3);
    num1.printNumber();

    num2.setNumber(1, 7);
    num2.printNumber();

    sum = sumComplex(num1, num2);
    sum.printNumber();

    return 0;
}