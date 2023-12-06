#include <bits/stdc++.h>
using namespace std;

class Animal
{
private:
    string name;
    int price;
    string sound;

public:
    string color;
    int weight;
    string typeOfAnimal;
    void setData(string name, int price, string sound);
    void getData()
    {
        cout << "The name of " << typeOfAnimal << " is " << name << endl;
        cout << "Price of " << name << " is " << price << endl;
        cout << "Sound of " << name << " is " << sound << endl;
        cout << "Color of " << name << " is " << color << endl;
        cout << "Weight of " << name << " is " << weight << "Kg" << endl;
    }
};

void Animal ::setData(string name1, int price1, string sound1)
{
    name = name1;
    price = price1;
    sound = sound1;
};

int main()
{
    Animal Dog;
    Dog.setData("Tommy", 1200, "Bark");
    Dog.color = "Black";
    Dog.weight = 10;
    Dog.weight = 10;
    Dog.typeOfAnimal = "Dog";

    Dog.getData();

    return 0;
}