#include <iostream>
using namespace std;

// Base Class
class Employee
{
    // int id;
    // float salary;

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 32.5;
    };
    Employee(){}; // here call this class, because when it inheritance by any anothe class, its bydefault call. if i not call here it's througing error, when it inheritance by any other class.
};

// Derived class syntax.
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
       // class members/methods/etc...
}

// Note:
1. Default Visibility mode is private.
2. Public Visibility Mode : Public Members of the base class becomes Public members of the derived class.
3. Private Visibility Mode : Public members of the base class becomes Private members of the derived class.
4. Private members are never inherited.



*/

// Creating a Programmer class derived from Employee Base Class

class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee Gaurav(4), Saurav(1);
    cout << Gaurav.salary << endl;
    cout << Saurav.salary << endl;
    cout << Gaurav.id << endl;
    cout << endl;

    cout << "<--- Data from Programmer class --->" << endl;

    Programmer coder(41);
    coder.getData();
    cout << coder.languageCode << endl;
    cout << coder.id << endl; // Now i can access this, by making the Programmer public inheritance.

    return 0;
}