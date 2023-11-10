#include <iostream>
using namespace std;

class employe
{
    // private:  // if i dont write This it is by default private.
    int id;
    static int counter; // we can not initilize the variable here its givs syntax error.

public:
    void setData(void)
    {
        cout << "Enter The Id: " << endl;
        cin >> id;
        counter++;
    }

    void getData(void)
    {
        cout << "Id of The Employe is No " << counter << " : " << id << endl;
    }

    // this is a static function
    static void getCount(void)
    {
        // cout << id << endl;  // Through an error because cant acces in static function id.
        cout << "The value of Counter is " << counter << endl;
    }
};

int employe::counter; // Default value is 0.
// int employe::counter = 100; // we can initilize the counter value here. like, the its start from 100.

int main()
{
    employe Gaurav, nitish, subh;
    // Gaurav.id = 101;
    // Gaurav.counter = 01; // Can't Do this because Id and counter are private

    Gaurav.setData();
    Gaurav.getData();
    employe::getCount();

    nitish.setData();
    nitish.getData();
    employe::getCount();

    subh.setData();
    subh.getData();
    employe::getCount();
    return 0;
}