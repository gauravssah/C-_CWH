#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }

    void getData()
    {
        cout << "The id is : " << id << endl;
        cout << "The price is : " << price << endl;
    }
};

int main()
{
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int[34];

    ShopItem *ptr = new ShopItem[size];
    ShopItem *temptr = ptr;
    int q;
    float p;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Id and Price of item" << i + 1 << endl;
        cin >> q >> p;
        // (*ptr).setData(q, p);  // Or we can use arrow operator
        ptr->setData(q, p);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "The price and id of item" << i + 1 << endl;
        temptr->getData();
        temptr++;
    }

    return 0;
}