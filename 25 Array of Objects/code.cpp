#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 124;
        cout << "Enter the id : " << endl;
        cin >> id;
    }

    void getData(void)
    {
        cout << "The id of this employee is : " << id << " and salary is :" << salary << endl;
    }
};

int main()
{

    employee gs[4];

    for (int i = 0; i < 4; i++)
    {
        gs[i].setId();
        gs[i].getData();
    }

    return 0;
}