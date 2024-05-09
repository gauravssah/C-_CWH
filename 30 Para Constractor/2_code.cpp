#include <iostream>
using namespace std;
#include <cmath>

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void printPoints(void)
    {
        cout << "The Point is (" << x << ", " << y << ")" << endl;
    }

    friend void sqRoot(Point o1, Point o2);
};

void sqRoot(Point o1, Point o2)
{
    float ans = sqrt(pow((o2.x - o1.x), 2) + pow((o2.y - o1.y), 2));
    cout << "Distance is : " << ans << endl;

    // cout << endl;
    // cout << endl;
    // cout << "p of x = " << o1.x << endl;
    // cout << "p of y = " << o1.y << endl;
    // cout << endl;
    // cout << endl;
    // cout << "p2 of x = " << o2.x << endl;
    // cout << "p2 of y = " << o2.y << endl;
}

int main()
{

    Point p1(1, 2);
    p1.printPoints();

    Point p2(3, 2);
    p2.printPoints();
    sqRoot(p1, p2);
    return 0;
}