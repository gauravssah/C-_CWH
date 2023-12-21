#include <iostream>
using namespace std;

/*

syntax for initialization list in constructor:

constructor (argument - list) : initilization-section
{
    assignment + other code:
}

*/

class Test
{
    int a, b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i + j)
    // Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) : a(i), b(a + j)
    // Test(int i, int j) : b(j), a(i)
    // Test(int i, int j) : b(j), a(b + i) // This will create problems becasue a will be initialized first.

    Test(int i, int j) : a(i)
    {
        b = j;
        cout << "Constructor executed." << endl;
        cout << "value of a is : " << a << endl;
        cout << "value of a is : " << b << endl;
    }
};

int main()
{
    Test t(5, 4);

    return 0;
}
