#include <iostream>
using namespace std;

int main()
{
    // Array Example
    int marks[] = {23, 24, 25, 26};

    int mathMarks[4];
    mathMarks[0] = 2457;
    mathMarks[1] = 1557;
    mathMarks[2] = 4857;
    mathMarks[3] = 9847;

    // cout << "The are Math Marks" << endl;
    // cout << mathMarks[0] << endl;
    // cout << mathMarks[1] << endl;
    // cout << mathMarks[2] << endl;
    // cout << mathMarks[3] << endl;

    // cout << endl;

    // cout << "These are Marks" << endl;
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;

    // You can change the value of an arry
    // marks[2] = 124;
    // marks[3] = 134;

    // cout << "After Changing the value of the marks" << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    // ----------->

    // using loop to print the marks

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << marks[i] << endl;
    // }

    // Now doing using while -->
    // int i = 0;
    // while (i < 4)
    // {
    //     cout << marks[i] << endl;
    //     i++;
    // }

    // Now doing using Do while -->
    // int i = 0;
    // do
    // {
    //     cout << marks[i] << endl;
    //     i++;
    // } while (i < 4);

    // Pointers and arrays

    int *p = marks;

    cout << "The value at p : " << p << endl;
    cout << "The value at *p : " << *p << endl;
    cout << "The value at *(p+1) : " << *(p + 1) << endl;
    cout << "The value at *(p+2) : " << *(p + 2) << endl;
    cout << "The value at *(p+3) : " << *(p + 3) << endl;

    return 0;
}