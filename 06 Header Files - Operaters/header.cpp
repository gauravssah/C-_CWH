#include <iostream>
using namespace std;

int main()
{

    int a = 4, b = 5;
    cout << "Operaters in c++" << endl;
    cout << "Following are the types of operators in c++" << endl;
    // Arithmetic Operators

    cout << "The value of a + b is: " << a + b << endl;
    cout << "The value of a - b is: " << a - b << endl;
    cout << "The value of a * b is: " << a * b << endl;
    cout << "The value of a / b is: " << a / b << endl;
    cout << "The value of a % b is: " << a % b << endl;
    cout << "The value of a ++ is: " << a++ << endl;
    cout << "The value of a -- is: " << a-- << endl;
    cout << "The value of  --a is: " << --a << endl;
    cout << "The value of  ++a is: " << ++a << endl;
    cout << endl;
    cout << endl;
    // Assignment Operators --> Used to assign value to variables
    // int a = 3, b = 9;
    // char d = 'd';

    // Comparison operators
    cout << "Comparison operators" << endl;
    cout << "The Value of a == b is : " << (a == b) << endl;
    cout << "The Value of a != b is : " << (a != b) << endl;
    cout << "The Value of a > b is : " << (a > b) << endl;
    cout << "The Value of a < b is : " << (a < b) << endl;
    cout << "The Value of a <= b is : " << (a <= b) << endl;
    cout << "The Value of a >= b is : " << (a >= b) << endl;

    cout << endl;
    cout << endl;

    // Logical Operators

    cout << "Logical Operators in c++" << endl;
    cout << "The value of ((a == b) && (a < b)) logical operators is : " << ((a == b) && (a < b)) << endl;
    cout << "The value of ((a == b) || (a < b)) logical operators is : " << ((a == b) || (a < b)) << endl;
    cout << "The value of (!(a == b)) logical operators is : " << (!(a == b)) << endl;
    return 0;
}