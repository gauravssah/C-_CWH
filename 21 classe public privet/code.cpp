#include <iostream>
using namespace std;

class Employee
{

private:
    int a, b, c;

public:
    int d, e;

    void setData(int a1, int b1, int c1); // fun Declaration
    void getData()
    {
        cout << "The Value Of a is " << a << endl;
        cout << "The Value Of b is " << b << endl;
        cout << "The Value Of c is " << c << endl;
        cout << "The Value Of d is " << d << endl;
        cout << "The Value Of e is " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{

    Employee Gaurav;
    // Gaurav.a = 134; // cant do because -> declared private , a is private.

    Gaurav.d = 334;
    Gaurav.e = 184;

    Gaurav.setData(1, 2, 4); // in Privet we need to assign the value like this.
    Gaurav.getData();        // using this we can getting the data print on terminal.

    return 0;
}