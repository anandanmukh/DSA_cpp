#include <iostream>
using namespace std;

// function to swap the position of two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// function to print an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// function to sort in ascending order (change < to > for descending)
void selectionSort(int arr[], int size)
{
    for (int step = 0; step < size - 1; step++)
    {
        int min_idx = step;
        for (int i = step + 1; i < size; i++)
        {
            if (arr[i] < arr[min_idx])
            {
                min_idx = i;
            }
            swap(&arr[min_idx], &arr[step]);
        }
    }
}


int main()
{
    int arr[] = {1, 45, 58, 65, 22, 12, 20, 2, 3, 5, 9, 222};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    cout << "The sorted array in ascending order is : " << endl;
    printArray(arr, size);
    return 0;
}