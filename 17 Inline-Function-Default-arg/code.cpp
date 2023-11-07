#include <iostream>
using namespace std;

// int product(int x, int y)
// {
//     static int c = 0;
//     c = c + 1;
//     return x * y + c;
// }

// ---------->
// Now make this function inline.
inline int product(int x, int y)
{
    return x * y;
}

// -----------default arg.-------

float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

int main()
{
    // int a, b;
    // cout << "Enter The value of a and b : " << endl;
    // cin >> a >> b;

    // cout << "The product of a and b is : " << product(a, b) << endl;
    // cout << "The product of a and b is : " << product(a, b) << endl;
    // cout << "The product of a and b is : " << product(a, b) << endl;
    // cout << "The product of a and b is : " << product(a, b) << endl;
    // cout << "The product of a and b is : " << product(a, b) << endl;
    // cout << "The product of a and b is : " << product(a, b) << endl;
    // cout << "The product of a and b is : " << product(a, b) << endl;
    // cout << "The product of a and b is : " << product(a, b) << endl;
    // cout << "The product of a and b is : " << product(a, b) << endl;

    int money = 10000;
    cout << "If you have - " << money << "you will get -" << moneyReceived(money) << " after 1year." << endl;
    cout << "FOr VIP -> If you have - " << money << "you will get -" << moneyReceived(money, 1.10) << " after 1year." << endl;
    return 0;
}