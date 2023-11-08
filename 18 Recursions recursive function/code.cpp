#include <iostream>
using namespace std;

// --------------factorial------------------

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

// -------------- fibonacci Serice ------------------
int fibo(int n)
{
    if (n < 2)
    {
        return 1;
    }

    return fibo(n - 2) + fibo(n - 1);
}

int main()
{
    // int n;
    // cout << "Enter The Number. " << endl;
    // cin >> n;
    // cout << "The Factoral of " << n << " is : " << factorial(n);

    // ------------------->
    // Printing The Fibonacci Serice
    //   ----------
    //   ----------
    //   ----------

    // --------
    // int a;
    // cout << "Enter The Number. " << endl;
    // cin >> a;
    // cout << "The term in fibonacci sequence at position " << a << " is : " << fibo(a) << endl;
    // return 0;
}