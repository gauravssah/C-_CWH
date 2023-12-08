#include <iostream>
using namespace std;

class Y;

class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};

class Y
{
    int num;

public:
    void setvalue(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "The Sum of X and Y object Gives me : " << o1.data + o2.num << endl;
}

int main()
{
    X a;
    a.setValue(5);

    Y b;
    b.setvalue(13);

    add(a, b);

    return 0;
}