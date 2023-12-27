#include <iostream>
#include <vector>
using namespace std;

template <class T>
void displayVector(vector<T> &vec)
{
    cout << "Printing ...." << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;        // zero length integer vector.
    vector<char> vec2(4);    // 4-Element character vector.
    vector<char> vec3(vec2); // 4-Element character vector from vec2.
    vector<int> vec4(6, 13); // 6-Element vector of 13s.
    int element, size;
    // vec2.push_back('4');
    displayVector(vec4);
    cout << vec4.size() << endl;

    return 0;
}