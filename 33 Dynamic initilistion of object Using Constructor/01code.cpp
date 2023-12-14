#include <iostream>
using namespace std;

class BankDeposit
{
    int principleAMount;
    int year;
    float interestRate;
    int returnAmount;

public:
    BankDeposit(){};
    BankDeposit(int p, int y, float i);
    BankDeposit(int p, int y, int I);
    void show();
};

BankDeposit::BankDeposit(int p, int y, float i)
{
    principleAMount = p;
    year = y;
    interestRate = i;
    returnAmount = principleAMount;

    for (int i = 0; i < year; i++)
    {
        returnAmount = returnAmount * (1 + interestRate);
    }
}

BankDeposit::BankDeposit(int p, int y, int i)
{
    principleAMount = p;
    year = y;
    interestRate = float(i) / 100;
    returnAmount = principleAMount;

    for (int i = 0; i < year; i++)
    {
        returnAmount = returnAmount * (1 + interestRate);
    }
}

void BankDeposit ::show()
{
    cout << "Your principleAMount : " << principleAMount << " after " << year << " with interestRate :" << interestRate << " per Year is becomes : " << returnAmount << endl;
}

int main()
{
    BankDeposit b1, b2, b3;
    int p, y;
    float i;
    int I;

    cout << "Enter The value of p, y, i" << endl;
    cin >> p >> y >> i;
    b1 = BankDeposit(p, y, i);
    b1.show();

    cout << "Enter The value of p, y, I" << endl;
    cin >> p >> y >> I;
    b2 = BankDeposit(p, y, I);
    b2.show();

    return 0;
}