#include <bits/stdc++.h>
using namespace std;

// --------------------------->

int calFactorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * calFactorial(n - 1);
}

// --------------------------->

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }

    return fib(n - 2) + fib(n - 1);
}

// --------------------------->

void printfib(int n)
{
    // int n1 = 0;
    // int n2 = 1;
    // int n3 = 0;
    // cout << n1 << " "; // = 0
    // cout << n2 << " "; // = 1
    // for (int i = 0; i < n; i++)
    // {

    //     n3 = n3 + i;
    //     cout << n3 << " ";
    // }
}

int main()
{
    int num;
    cout << "Enter The Number." << endl;
    cin >> num;

    // cout << "The factorial Of " << num << " is " << calFactorial(num) << endl;

    // cout << "The fib num at " << num << " is " << fib(num) << endl;

    // printfib(num);

    return 0;
}