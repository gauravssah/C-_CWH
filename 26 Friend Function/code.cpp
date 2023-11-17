#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNum()
    {
        cout << "The complex No :" << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2;
    c1.setNum(1, 4);
    c1.printNum();

    c2.setNum(5, 8);
    c2.printNum();
    return 0;
}