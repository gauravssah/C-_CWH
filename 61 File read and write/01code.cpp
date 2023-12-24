#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Connecting our file with stream.
    ofstream gout("write.txt");

    // Creating a name string and filling it with the string Entered by the user.
    string name;
    cout << "Hey, Enter your name : " << endl;
    cin >> name;

    // Now, Writing a string to the file.
    gout << "My Name is : " + name;

    gout.close(); // closing the link.

    // Now, Reading the Content form the file using ifstream.
    ifstream gin("write.txt");
    string content;
    // gin >> content;
    getline(gin, content);
    cout << "The content in the write file is : " << content << endl;
    return 0;
}