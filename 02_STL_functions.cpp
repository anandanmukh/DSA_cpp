// STL fucntion; push-front(), push-back(), front(), back(), reverse, begin, end

#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> test; // list
    test.push_front(1);
    test.push_back(2);
    test.push_front(3);

    cout << "Linked List: ";
    for (auto it = test.begin(); it != test.end(); it++)
    {
        cout << (*it) << " ";
    } // output should be 3 1 2

    cout << "\n";
    cout << "Front Element: " << (test.front()) << endl;
    cout << "Back Elemetn: " << test.back() << endl;

    test.reverse();
    cout << "After reversing linked list: " << endl;
    for (auto it = test.begin(); it != test.end(); it++)
    {
        cout << (*it) << " ";
    } // output should be 2 1 3
    cout << "\n";

    test.sort();
    cout << "After sorting the Linked List: ";
    for (auto it = test.begin(); it != test.end(); it++)
    {
        cout << (*it) << " ";
    } // output should be 1 2 3 
    cout << "\n";
}
