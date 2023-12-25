#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // writing to the file.

    ofstream out;
    out.open("file1.txt");
    out << "This is gaurav sah.\n";
    out << "Guarav sah is a lazey person.\n";
    out << "Are you lessining me, waht i am saying.\n";
    out.close();

    // reading from the file.
    ifstream in;
    string st, st1, st2, st3;
    in.open("file1.txt");
    // in >> st >> st1 >> st2 >> st3;
    // cout << st << st1 << st2 << st3;

    while (in.eof() == 0) // acces all the data.
    {
        getline(in, st);
        cout << st << endl;
    }

    return 0;
}