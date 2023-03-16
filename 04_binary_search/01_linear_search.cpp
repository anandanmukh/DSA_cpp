#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int search_num)
{
    for (int num_idx = 0; num_idx < size; num_idx++)
    {
        if (arr[num_idx] == search_num)
        {
            return num_idx;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 45, 58, 65, 22, 12, 20, 2, 3, 5, 9, 222};
    int search_num;
    cout << "Enter the number you want to search in the array: " << endl;
    cin >> search_num;
    int size = sizeof(arr) / sizeof(arr[0]);
    int output = linearSearch(arr, size, search_num);
    if (output != -1)
    {
        cout << "The index position is " << output << endl;
    }
    else
    {
        cout << "The element does not exist in the array!";
    }
    return 0;
}