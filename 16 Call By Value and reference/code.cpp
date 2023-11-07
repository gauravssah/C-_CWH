#include <iostream>
using namespace std;

// Not Swapping the original number.
void swapn(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// --------->

// This is swapping the original variable.
// This is call by reference using pointers.
void swapByPointer(int *a, int *b)
{
    // cout << "*a :- " << *a << endl;
    // cout << "a :- " << a << endl;
    // cout << "*b :- " << *b << endl;
    // cout << "b :- " << b << endl;

    int temp = *a;
    *a = *b;
    *b = temp;
}

// -------------->

// Call by reference using c++ reference variables.
// This is swapping the original variable.

// void swapreferencevar(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// -------------->

// Call by reference using c++ reference variables.
// This is swapping the original variable.
// And returning the ref of a i.e x.
int &swapreferencevar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main()
{
    int x = 4, y = 5;
    cout << "The value of X : " << x << ", The value of Y : " << y << endl;
    // swapn(x, y); // This will not swap the original numbers .
    // swapByPointer(&x, &y); // This is swapping the original numbers.
    swapreferencevar(x, y);       // This will swap a and b using reference variables.
    swapreferencevar(x, y) = 455; // This will change the X = 455;
    cout << "The value of X : " << x << ", The value of Y : " << y << endl;
    return 0;
}