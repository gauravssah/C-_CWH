#include <iostream>
using namespace std;

class c
{
public:
    void say()
    {
        cout << "Hello World" << endl;
    }
};

class d : public c

{
    int p;

public:
    // D's new say() method will override base class's method;
    void say()
    {
        cout << "Hello My beautiful Peoples." << endl;
    }
};

int main()
{
    c c1;
    c1.say();

    d d1;
    d1.say();

    return 0;
}