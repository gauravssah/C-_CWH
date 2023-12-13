#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b = 9, int c = 15)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printData();
};

void Simple::printData()
{
    cout << "The value of data1 is : " << data1 << ", "
         << " data2 is : " << data2 << " data3 is : " << data3 << endl;
}

int main()
{
    Simple s(4);
    s.printData();
    // ------------------
    Simple s1(7, 41);
    s1.printData();
    // ------------------
    Simple s2(7, 41, 4);
    s2.printData();

    return 0;
}