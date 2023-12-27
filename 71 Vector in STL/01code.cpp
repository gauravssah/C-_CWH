#include <iostream>
#include <vector>
using namespace std;

void displayVector(vector<int> &vec)
{
    cout << "Printing ...." << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
        // cout << vec.at(i) << " ";   // Both work same.
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;
    int element, size;

    cout << "Enter the size of your vectior." << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Elemnt to this vector." << endl;
        cin >> element;
        vec1.push_back(element);
    }

    displayVector(vec1);
    vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter, 512);
    // vec1.insert(iter + 1, 512);
    // vec1.insert(iter + 1, 102, 512);
    displayVector(vec1);

    return 0;
}