#include <bits/stdc++.h>
using namespace std;

class Shop
{
private:
    int productId[100];
    int productPrice[100];
    int counter;

public:
    void inscounter(void) { counter = 0; }
    void setId_price(void);
    void getItems(void);
};

void Shop ::setId_price(void)
{
    cout << "Enter The Id of Product " << counter + 1 << endl;
    cin >> productId[counter];

    cout << "Enter the Price of Product " << counter + 1 << endl;
    cin >> productPrice[counter];

    counter++;
}

void Shop ::getItems(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Product Id : " << productId[i] << " and product Price : " << productPrice[i] << endl;
    }
}

int main()
{
    Shop myDukan;
    myDukan.inscounter();
    for (int i = 0; i < 5; i++)
    {
        myDukan.setId_price();
    }

    cout << "Here is your Products.";
    myDukan.getItems();

    return 0;
}