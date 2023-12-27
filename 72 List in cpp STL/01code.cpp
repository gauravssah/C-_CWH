#include <iostream>
#include <list>
using namespace std;

void displayList(list<int> &lst)
{
    cout << "Printing List : ";
    list<int>::iterator it;

    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
}

int main()
{
    list<int> list1; // List of 0 length.
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(4);
    list1.push_back(8);
    list1.push_back(78);
    list1.push_back(45);
    list1.push_back(12);
    list1.push_back(11);

    displayList(list1);
    /*
        list<int>::iterator iter;
        iter = list1.begin();
        cout << *iter << endl;
        iter++;
        cout << *iter << endl;
        iter++;
        cout << *iter << endl;
    */

    // Removing elements from the list. ----->
    // cout << "Removing elements from the list." << endl;
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(78);
    // displayList(list1);

    // Sorting the list. ----->
    // cout << "Sorting the list." << endl;
    // list1.sort();
    // displayList(list1);

    // Reversing the list ------>
    // list1.reverse();
    // cout << "Reversing the list." << endl;
    // displayList(list1);

    // ---------- list2 -------------->

    list<int> list2(3); // Empty list of size : 7;
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;

    displayList(list2);

    // Merging the Lists ---->

    // list1.sort();
    // list2.sort();

    list1.merge(list2);
    cout << "Agter merging the list." << endl;
    displayList(list1);

    return 0;
}