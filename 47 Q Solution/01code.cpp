#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "Enter the value of a :" << endl;
        cin >> a;
        cout << "Enter the value of b :" << endl;
        cin >> b;
    }

    void performOperationSimple()
    {
        cout << "The value of a + b : " << a + b << endl;
        cout << "The value of a - b : " << a - b << endl;
        cout << "The value of a * b : " << a * b << endl;
        cout << "The value of a / b : " << a / b << endl;
        cout << "The value of a % b : " << a % b << endl;
    }
};

class ScientificCalculator
{
    int a, b;

public:
    void getDataScientific()
    {
        cout << "Enter the value of a :" << endl;
        cin >> a;
        cout << "Enter the value of b :" << endl;
        cin >> b;
    }

    void performOperationScientific()
    {
        cout << "The value of cos(a) : " << cos(a) << endl;
        cout << "The value of sin(b) : " << sin(b) << endl;
        cout << "The value of exp(a) : " << exp(a) << endl;
        cout << "The value of tan(a) : " << tan(a) << endl;
        cout << "The value of tan(b) : " << tan(b) << endl;
    }
};

class HybrideCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main()
{
    HybrideCalculator hyCalc;

    // hyCalc.getDataScientific();
    // hyCalc.performOperationScientific();

    hyCalc.getDataSimple();
    hyCalc.performOperationSimple();

    return 0;
}