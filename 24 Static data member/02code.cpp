#include <iostream>
using namespace std;

class employess
{
    int id;
    static int countert;

public:
    void setData(void)
    {
        cout << "Enter the id : " << endl;
        cin >> id;
        countert++;
    };

    void getData(void)
    {
        cout << "The Id of This Employee is : " << id << " This is Employee No . " << countert << endl;
    }

    static void getcount(void)
    {
        cout << "The value of count is : " << countert << endl;
    }
};

int employess::countert; // default value is 0.
// int employess::countert = 1000; // but i can gives a initial value here.
int main()
{
    // employess gaurav;
    // employess saurav;
    // employess pinku;

    employess gaurav, saurav, pinku;

    gaurav.setData();
    gaurav.getData();
    gaurav.getcount();
    employess::getcount();

    saurav.setData();
    saurav.getData();
    saurav.getcount();
    employess::getcount();

    pinku.setData();
    pinku.getData();
    pinku.getcount();
    employess::getcount();

    return 0;
}