#include <iostream>
using namespace std;

class Constractor
{
    int a, b;

public:
    Constractor(void);

    void printNumbers()
    {
        cout << "Num : " << a << " + " << b << "i" << endl;
    }
};

Constractor ::Constractor(void)
{
    a = 1;
    b = 2;
}

int main()
{
    Constractor c;
    c.printNumbers();

    return 0;
}