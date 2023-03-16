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

// insertion sort in ascending order
void insertionSort(int arr[], int size)
{
    bool swapped;
    for (int step = 1; step < size; step++)
    {
        int key = arr[step];
        int j = step - 1;

        // finding position for inserting key in the sorted half
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {1, 45, 58, 65, 22, 12, 20, 2, 3, 5, 9, 222};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);
    cout << "The sorted array in ascending order is : " << endl;
    printArray(arr, size);
    return 0;
}