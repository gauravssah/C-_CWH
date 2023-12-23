#include <iostream>
using namespace std;

class baseClass
{
public:
    int var_base = 10;

    // making the virtual function
    virtual void display(void)
    {
        cout << "Dispalying baseClass variable var_base : " << var_base << endl;
    }
};

class DerivedClass : public baseClass
{
public:
    int var_derived = 12;
    void display(void)
    {
        cout << "Dispalying baseClass from derivedclass variable var_base : " << var_base << endl;
        cout << "Dispalying DerivedClass  variable var_derived : " << var_derived << endl;
    }
};

int main()
{
    // <---------- *base_class_pointer ---------->
    baseClass *base_class_pointer;
    baseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display(); // Now it's displaying the DerivedClass display function.
    return 0;
}