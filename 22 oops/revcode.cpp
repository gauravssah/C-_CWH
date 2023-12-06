#include <bits/stdc++.h>
using namespace std;

class binary
{
private:
    string s;
    // void checkbinary(void); // if we declear this in private, then we cant access this in main() function, because its become a private.

public:
    void getbinary(void);
    void checkbinary(void);
    void onescomp(void);
    void display(void);
};

void binary::getbinary(void)
{
    cout << "Enter The Numbers. " << endl;
    cin >> s;
}

void binary ::checkbinary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Not A binary Number." << endl;
            exit(0);
        }
    }
}

void binary ::onescomp(void)
{
    checkbinary(); // This is call nesting of function.

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }

    cout << endl;
}

int main()
{
    binary mynum;
    mynum.getbinary();
    // mynum.checkbinary();  // we can check this on upper in (onescomp).
    mynum.display();
    mynum.onescomp();
    mynum.display();

    return 0;
}