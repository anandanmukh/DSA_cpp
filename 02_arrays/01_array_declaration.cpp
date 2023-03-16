#include <iostream>
using namespace std;

int main()
{
    // 1; array declaration be specifying size
    cout << "*** array declaration by specifying size" << endl;
    int arr_1[3];
    for (int i = 0; i < 3; i++)
    {
        cout << arr_1[i] << endl; // will print garbage values
    }

    // 2; array declaration by initializing elements
    cout << "***array declaration by initializing elements" << endl;
    int arr_2[] = {10, 20, 30, 40};
    int num_of_ele = sizeof(arr_2) / sizeof(int);
    cout << "Number of elements: " << num_of_ele << endl;
    for (int i = 0; i < num_of_ele; i++)
    {
        cout << arr_2[i] << endl;
    }

    // 3; array declaration by specifying size and initializing element
    cout << "***array declaration by specifying and initializing element" << endl;
    int arr_3[5] = {10, 20, 30, 40};
    for (int i = 0; i < 5; i++)
    {
        cout << arr_3[i] << endl;
    }
    // 0 will be initialized if the array is not completely full
    return 0;
}