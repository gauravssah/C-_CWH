#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << "Using Function with 2 Arguments" << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "Using Function with 3 Arguments" << endl;
    return a + b + c;
}

// calculate the volume of a cylinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

// calculate the volume of a cube
int volume(int a)
{
    return (a * a * a);
}

// Rectangular box
int volume(int l, int b, int h)
{
    return (l * b * h);
}

int main()
{
    cout << "The Sum Of 3 and 6 is - " << sum(3, 6) << endl;
    cout << "The Sum Of 3, 7 and 6 is - " << sum(3, 7, 6) << endl;
    cout << "The volume of a cylinder - " << volume(4, 12) << endl;
    cout << "The volume of a cube - " << volume(4) << endl;
    cout << "The volume of Rectangular box - " << volume(4, 2, 1) << endl;
    return 0;
}