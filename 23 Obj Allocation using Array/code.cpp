#include <iostream>
using namespace std;

class myShop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setItem(void);
    void getItems(void);
};

void myShop ::setItem(void)
{
    cout << "Enter The Id Of Your Product :" << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter The Price Of Your Product :" << counter + 1 << endl;
    cin >> itemPrice[counter];

    counter++;
}

void myShop::getItems(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Product Id is: " << itemId[i] << " and "
             << "Price is : " << itemPrice[i] << endl;
    }
}

int main()
{
    myShop GsMall;

    cout << "Enter The Number of product :" << endl;
    int n;
    cin >> n;

    GsMall.initCounter();

    for (int i = 0; i < n; i++)
    {
        GsMall.setItem();
    }

    cout << endl;
    cout << "These Are The Product With Id And Price." << endl;
    cout << endl;
    GsMall.getItems();

    return 0;
}