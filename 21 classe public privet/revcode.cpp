#include <bits/stdc++.h>
using namespace std;

class Emply
{
private:
    int a, b, c;

public:
    int d, e;

    void setData(int x, int y, int z); // Only function declaration
    // void getData()    // Here declear and define
    // {
    //     cout << "The value of a is: " << a << endl;
    //     cout << "The value of b is: " << b << endl;
    //     cout << "The value of c is: " << c << endl;
    //     cout << "The value of d is: " << d << endl;
    //     cout << "The value of e is: " << e << endl;
    // }

    void getData(); // Only function declaration
};

void Emply ::setData(int p, int q, int r)
{
    a = p;
    b = q;
    c = r;
}

void Emply ::getData()
{
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
    cout << "The value of c is: " << c << endl;
    cout << "The value of d is: " << d << endl;
    cout << "The value of e is: " << e << endl;
}

int main()
{
    Emply gaurav;
    // gaurav.a = 01; // error: 'int Emply::a' is private within this context

    gaurav.setData(1, 2, 3);
    gaurav.d = 11;
    gaurav.e = 12;

    gaurav.getData();
    return 0;
}