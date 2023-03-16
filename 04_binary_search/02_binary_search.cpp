#include <iostream>
using namespace std;

int binary_search_iterative(int arr[], int size, int search_num)
{
    int start_idx = 0, end_idx = size - 1;
    int mid;
    while (start_idx <= end_idx)
    {
        mid = (start_idx + end_idx) / 2;
        if (arr[mid] == search_num) // element found
        {
            return mid;
        }
        else if (arr[mid] > search_num) // search_num is on the right side
        {
            start_idx = mid + 1;
        }
        else // search_num is on the left side
        {
            end_idx = mid - 1;
        }
    }
    return -1;
}

int binary_search_recursive(int arr[], int search_num, int start_idx, int end_idx)
{
    if (start_idx > end_idx) // base case; element not found
    {
        return -1;
    }
    else
    {
        int mid = (start_idx + end_idx) / 2; // found the element
        if (search_num == arr[mid])
        {
            return mid;
        }
        else if (search_num > arr[mid]) // x is on the right side
        {
            return binary_search_recursive(arr, search_num, mid + 1, end_idx);
        }
        else // x is on the left side
        {
            return binary_search_recursive(arr, search_num, start_idx, mid - 1);
        }
    }
    return 0;
}

int main()
{
    int arr[] = {1, 2, 5, 3, 20, 12, 22, 45, 58, 65, 9, 222};
    int search_num;
    cout << "Enter the number you want to search in the array: " << endl;
    cin >> search_num;
    int size = sizeof(arr) / sizeof(arr[0]);
    int output = binary_search_recursive(arr, search_num, 0, sizeof(arr)-1);
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