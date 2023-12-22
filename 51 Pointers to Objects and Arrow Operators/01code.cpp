#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is : " << real << endl;
        cout << "The imaginary part is : " << imaginary << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    Complex c1; // Old way of doing.
    c1.setData(4, 3);
    c1.getData();

    // Another Way of doing. ------->
    Complex c;
    Complex *ptr2 = &c;
    (*ptr2).setData(41, 31); // is exactly same as.
    (*ptr2).getData();       // is as good as.

    // Another Way of doing. ------->
    Complex *ptr = new Complex; // we can also make like that in one line.
    ptr->setData(7, 2);
    // (*ptr).getData();  // same.
    ptr->getData();

    // // Array of Objects ------->
    Complex *ptr1 = new Complex[4];
    ptr1->setData(48, 49);
    ptr1->getData();

    return 0;
}