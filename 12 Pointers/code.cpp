#include <iostream>
using namespace std;

int main()
{
    // Pointer --> Data type which holds the address of other data types.

    int a = 3;
    int *b = &a;

    // & ---> (Address of) Operator
    cout << &a << endl;
    cout << b << endl;

    // * ---> (value at) Dereference Operator
    cout << *b << endl;

    // ** (Pointer to Pointer) ----->

    int **c = &b;

    cout << c << endl;
    cout << **c << endl;
    cout << *c << endl;

    return 0;
}