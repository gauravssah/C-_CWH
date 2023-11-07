#include <iostream>
using namespace std;

// int sum(int, int);
int sum(int n, int m);
// void g(void);
void g();

int main()
{
    int num1, num2;
    cout << "Enter Num1: " << endl;
    cin >> num1;
    cout << "Enter Num2: " << endl;
    cin >> num2;
    // num1 and num2 are actual parameters.
    cout << "The Sum is : " << sum(num1, num2) << endl;

    g();
    return 0;
}

int sum(int a, int b)
{

    // a and b is formal parameters.
    int c = a + b;
    return c;
}

void g()
{
    cout << "Hello Good Morning" << endl;
}