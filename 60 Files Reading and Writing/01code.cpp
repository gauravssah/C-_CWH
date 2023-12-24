#include <iostream>
#include <fstream>
using namespace std;

/*
The useful classes for working with files in c++ are:
1. fstreambase
2. ifstream  --> derived from fstreambase
3. ofstream  --> derived from ifstream
*/

// In order to work with files in c++, you will have to open it.
// Primarily, There are 2 ways to open a file:
//      1. Using to constructor.
//      2. Using the member function open() of the class.

int main()
{
    string st = "Gaurav Sah";
    // Opening files using constructor and writing it.
    ofstream out("sample60.txt"); // write operation.
    out << st;
    out << ", How are you? ok.";

    // Opening files using constructor and reading from it.
    string st2;
    ifstream in("sample60b.txt"); // read operation.
    // in >> st2;
    getline(in, st2);

    cout << st2 << endl;

    return 0;
}