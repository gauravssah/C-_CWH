#include <iostream>
using namespace std;

class baseClass
{
public:
    int var_base;
    void display(void)
    {
        cout << "Dispalying baseClass variable var_base : " << var_base << endl;
    }
};

class DerivedClass : public baseClass
{
public:
    int var_derived;
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
    base_class_pointer = &obj_derived; // Pointing baseClass pointer to derived class.

    base_class_pointer->var_base = 55;
    // base_class_pointer->var_derived = 58;  // will throw an error.
    base_class_pointer->display();
    base_class_pointer->var_base = 550;
    base_class_pointer->display();

    // <---------- *derived_class_pointer ---------->
    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 501;
    derived_class_pointer->var_base = 451;
    derived_class_pointer->display();

    return 0;
}