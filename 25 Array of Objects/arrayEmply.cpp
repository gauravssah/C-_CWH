#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    int id;
    int salery;

public:
    void setData(void)
    {
        salery = 100000;
        cout << "Enter The Id: " << endl;
        cin >> id;
    }

    void getData(void)
    {
        cout << "The id of This Employee is : " << id << endl;
        cout << "salery : " << salery << endl;
    }
};

int main()
{

    Employee meta[4];

    for (int i = 0; i < 4; i++)
    {
        meta[i].setData();
        meta[i].getData();
    }

    return 0;
}