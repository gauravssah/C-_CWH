#include <iostream>
using namespace std;

class c2;

class c1
{
    int val1;
    friend void exc(c1 &, c2 &);

public:
    void setData(int a)
    {
        val1 = a;
    }

    void display(void)
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exc(c1 &, c2 &);

public:
    void setData(int a)
    {
        val2 = a;
    }

    void display(void)
    {
        cout << val2 << endl;
    }
};

void exc(c1 &x, c2 &y)
{
    int tem = x.val1;
    x.val1 = y.val2;
    y.val2 = tem;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.setData(4);
    oc2.setData(6);

    exc(oc1, oc2);

    cout << "After Exchanging :" << endl;
    cout << "The value In oc1 : ";
    oc1.display();
    cout << "The value In oc2 : ";
    oc2.display();

    return 0;
}