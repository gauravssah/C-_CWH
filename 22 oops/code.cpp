#include <iostream>
#include <string>
using namespace std;

class binary
{
    // private:   // bydefault it is private,
    string s;

public:
    void enternumber(void);
    void checkBinary(void);
    void oncecomplement(void);
    void display(void);
};

void binary ::enternumber(void)
{
    cout << "Enter The Number :" << endl;
    cin >> s;

    // checkBinary();   // we can also call this directly here...
}

void binary ::checkBinary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrent number!" << endl;
            exit(0);
        }
    }
}

void binary ::oncecomplement(void)

{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}

void binary ::display(void)
{

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary b;
    b.enternumber();
    b.checkBinary();
    b.oncecomplement();
    b.display();

    return 0;
}