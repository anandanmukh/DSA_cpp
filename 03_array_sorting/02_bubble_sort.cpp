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

// bubble sort in ascending order
void bubbleSort(int arr[], int size)
{
    bool swapped;
    for (int step = 0; step < size - 1; step++)
    {
        swapped = false;
        for (int i = step; i < size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(&arr[i], &arr[i + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {1, 45, 58, 65, 22, 12, 20, 2, 3, 5, 9, 222};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    cout << "The sorted array in ascending order is : " << endl;
    printArray(arr, size);
    return 0;
}