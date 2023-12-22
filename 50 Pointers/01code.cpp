#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *ptr = &a;
    *ptr = 999;

    cout << "ptr : " << ptr << endl;
    cout << "*ptr : " << *ptr << endl;
    // cout << "(*ptr) : " << (*ptr) << endl;
    // cout << "(*ptr) : " << (*ptr) << endl;
    // cout << "*(ptr) : " << *(ptr) << endl;

    // new Operator/keyword.
    int *x = new int(40);
    cout << "The value of x : " << *x << endl;

    float *y = new float(40.88);
    cout << "The value of y : " << *y << endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;

    // deleter operator.
    // delete arr;  // it's free the dinamicaly arrray
    // delete[] arr; // also use like this to delete all the array elements.

    for (int i = 0; i < 3; i++)
    {
        cout << "The Value of arr" << i << " : " << arr[i] << endl;
    }

    return 0;
}