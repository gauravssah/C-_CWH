#include <iostream>
using namespace std;

int main()
{
    // Loops In C++

    // There Are Three Types of loops in c++
    //  1. For Loop
    //  2. While Loop
    //  3. Do-While Loop

    // 1. for loop --->

    // for (int i = 1; i <= 100; i++)
    // {
    //     cout << i << endl;
    // }

    //  2. While Loop --->
    // int i = 1;
    // while (i < 5)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    //  3. Do-While Loop   --->
    int i = 0;
    do
    {
        cout << i << endl;
        i++;
    } while (i < 10);

    return 0;
}