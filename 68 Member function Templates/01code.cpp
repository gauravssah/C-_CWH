#include <iostream>
using namespace std;

template <class T>

class Gaurav
{
public:
    T data;
    Gaurav(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Gaurav<T>::display()
{
    cout << "Data : " << data << endl;
}

void func(int a)
{
    cout << "I am first func() : " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am Templatised func() : " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "I am Templatised func() : " << a << endl;
}

int main()
{
    // Gaurav<int> obj(5);
    // Gaurav<float> obj(5.5);
    Gaurav<char> obj('G');
    obj.display();

    func(5); // I am first func() 5 (Exact match Takes the highest priority.)
    func1('A');
    return 0;
}