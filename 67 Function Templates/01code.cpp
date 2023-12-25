#include <iostream>
using namespace std;

// float funcAverage(int a, int b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

// float funcAverage2(int a, float b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

// <------------ Templates ------------>
template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
};

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
};

int main()
{

    float ans = funcAverage(5, 2);
    cout << ans << endl;

    float ans2 = funcAverage(5, 3.55);
    cout << ans2 << endl;

    // Using Templates
    int x = 5, y = 7;
    swapp(x, y);
    cout << "X -> " << x << endl
         << "y -> " << y << endl;

    return 0;
}