#include <iostream>
using namespace std;

// struct employee
// {
//     int id;
//     char favchar;
//     float salary;
// };

typedef struct employee
{
    int id;
    char favchar;
    float salary;
} ep;

union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    // *************** struct *******************

    // struct employee gaurav;
    // gaurav.id = 71;
    // gaurav.favchar = 'G';
    // gaurav.salary = 120000000;

    // cout << "The Value is : " << gaurav.id << endl;
    // cout << "The Value is : " << gaurav.favchar << endl;
    // cout << "The Value is : " << gaurav.salary << endl;

    // cout << endl;

    // struct employee nitish;
    // nitish.id = 5;
    // nitish.favchar = 'N';
    // nitish.salary = 120000000;

    // cout << "The Value is : " << nitish.id << endl;
    // cout << "The Value is : " << nitish.favchar << endl;
    // cout << "The Value is : " << nitish.salary << endl;

    // cout << endl;

    // ep sonu;
    // sonu.id = 001;
    // sonu.favchar = 'S';
    // sonu.salary = 12035000;

    // cout << "The value : " << sonu.id << endl;
    // cout << "The value : " << sonu.favchar << endl;
    // cout << "The value : " << sonu.salary << endl;

    // **************** union *******************

    // union money m1;
    // m1.rice = 50;
    // m1.car = 'c';

    // cout << "vale is: " << m1.rice << endl;
    // cout << "vale is: " << m1.car << endl;

    // **************enum*******************
    enum meal
    {
        breakfast,
        lunch,
        dinner
    };
    meal m1 = lunch;
    cout << (m1 == 1) << endl;
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;

    return 0;
}