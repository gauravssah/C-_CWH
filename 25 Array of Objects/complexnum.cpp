#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void setDataBySum(complex obj1, complex obj2)
    {
        a = obj1.a + obj2.a;
        b = obj1.b + obj2.b;
    }

    void printNumber()
    {
        cout << "Your Complex Number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setData(2, 4);
    c1.printNumber();

    c2.setData(1, 2);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();

    return 0;
}