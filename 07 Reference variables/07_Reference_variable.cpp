#include <iostream>
using namespace std;

int c = 45;
int main()
{

    // ************ Build in data Types ****************

    // int a, b, c;

    // cout << "Enter the value of A: " << endl;
    // cin >> a;

    // cout << "Enter The Value Of B" << endl;
    // cin >> b;

    // c = a + b;
    // cout << "The Sum Of " << a << "and" << b << " is : " << c << endl;
    // cout << "Globle C is : " << ::c << endl;

    // ************ Float, double and long double Literals ****************

    // float d = 34.4;
    // long double e = 34.4;

    // cout << "The Value of d is " << d << endl
    //      << "The Value of e is " << e << endl;

    // cout << "The Size of  34.4 is : " << sizeof(34.4) << endl;
    // cout << "The Size of  34.4f is : " << sizeof(34.4f) << endl;
    // cout << "The Size of  34.4F is : " << sizeof(34.4F) << endl;
    // cout << "The Size of  34.4l is : " << sizeof(34.4l) << endl;
    // cout << "The Size of  34.4L is : " << sizeof(34.4L) << endl;

    // ************ Reference Variables ****************

    float x = 455;
    float &y = x;

    cout << "x = " << x << endl;
    cout << "y = " << &y << endl;

    // ******************* Typecasting **********************

    // int a = 45;
    // cout << "The value of a is : " << a;

    // int a = 45.5;
    // float b = 55.58;
    // cout << "The value of a is : " << float(a) << endl;
    // cout << "The value of b is : " << int(b) << endl;

    // int c = int(b);
    // cout << "the value of c : " << c << endl;

    // cout << "The Expression is : " << a + b << endl;
    // cout << "The Expression is : " << a + int(b) << endl;
    // cout << "The Expression is : " << a + (int)b << endl;

    return 0;
}