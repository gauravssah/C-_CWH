#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Gaurav
{
public:
    T1 a;
    T2 b;
    T3 c;

    Gaurav(T1 x, T2 y, T2 z)
    {
        a = x;
        b = y;
        c = z;
    }

    void display()
    {
        cout << "The value of a : " << a << endl;
        cout << "The value of b : " << b << endl;
        cout << "The value of c : " << c << endl;
    }
};

int main()
{
    // These are using default parameters.
    Gaurav<> gObj(21, 5.5, 'G');
    gObj.display();

    cout << endl;
    // Specify data type.
    Gaurav<float, int, float> obj(5.5, 22, 4.3);
    obj.display();
    cout << endl;
    Gaurav<float, float, float> ob(5.5, 2.2, 4.3);
    ob.display();

    return 0;
}