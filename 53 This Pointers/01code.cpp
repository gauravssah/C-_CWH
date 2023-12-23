#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setData(int a)
    {

        // this is a keyword which is a pointer which points to the objects which is being to created.
        // And invokes the member function.
        this->a = a;
    }

    void getData(void)
    {
        cout << "The value of a is : " << a << endl;
    }
};

int main()
{
    A a;
    a.setData(4);
    a.getData();

    return 0;
}