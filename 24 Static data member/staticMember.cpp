#include <bits/stdc++.h>
using namespace std;

class employee
{
private:
    int id;
    static int count; // This is a static member

public:
    void setData(void)
    {
        cout << "Enter The Id :" << endl;
        cin >> id;
        count++;
    }

    void getData(void)
    {
        cout << "This is Employee No: " << count << " And His Id is : " << id << endl;
    }

    // Its is a static function --> its has access only static members.
    static void getCount(void)
    {
        cout << "The Value of Count is :" << count << endl;
        // cout << id; // can't do this.
    }
};

// int employee ::count = 100;
int employee ::count;

int main()
{
    employee Gaurav, Saurav, Suman, Suresh;

    Gaurav.setData();
    Gaurav.getData();
    employee::getCount();

    Saurav.setData();
    Saurav.getData();
    employee::getCount();

    Suman.setData();
    Suman.getData();
    employee::getCount();

    Suresh.setData();
    Suresh.getData();
    employee::getCount();

    return 0;
}