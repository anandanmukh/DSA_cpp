# DSA with C Repository

![DSA with C Image](https://images.pexels.com/photos/60626/pexels-photo-60626.jpeg?auto=compress&cs=tinysrgb&w=800)

This repository contains a collection of popular Data Structures and Algorithms implemented in C. It is designed to be used as a reference for anyone interested in learning and using DSA with C.

## Data Structures

The following Data Structures are implemented in this repository:
- Array
- Linked List
- Stack
- Queue
- Binary Tree
- Binary Search Tree
- Heap
- Hash Table
- Graph

Each Data Structure is implemented in its own file, and includes a header file and a source file. The header file contains the class definition, while the source file contains the implementation details.

## Algorithms

The following Algorithms are implemented in this repository:
- Sorting Algorithms: Bubble Sort, Selection Sort, Insertion Sort, Merge Sort, Quick Sort, Heap Sort
- Searching Algorithms: Linear Search, Binary Search
- Graph Algorithms: Breadth-First Search, Depth-First Search, Dijkstra's Algorithm, Bellman-Ford Algorithm, Floyd-Warshall Algorithm

Each Algorithm is implemented in its own file, and includes a header file and a source file. The header file contains the function declaration, while the source file contains the implementation details.

## Using this Repository

To use this repository, simply clone it to your local machine and include the necessary header files in your C code. You can then create instances of the Data Structures and call the Algorithms on them.

For example, to use the Binary Search Tree data structure and the Quick Sort algorithm, you would include the following headers in your C code:

```c
#include "binary_search_tree.h"
#include "quick_sort.h"
```
You can then create an instance of the Binary Search Tree and call the Quick Sort algorithm on it:

```c
BinarySearchTree<int> bst;
bst.insert(5);
bst.insert(2);
bst.insert(8);
bst.insert(1);
bst.insert(3);
bst.insert(7);
bst.insert(9);

QuickSort::sort(bst.getArray(), 0, bst.getSize() - 1);
```

# C Basics for DSA

C is a powerful and versatile programming language that is commonly used for Data Structures and Algorithms (DSA). If you're new to C, or need a refresher, here are the basic concepts you should know before diving into DSA:

## Variables

Variables are used to store values in C. To create a variable, you need to specify its data type and name:

```c
int x = 5;
double y = 3.14;
char z = 'a';
```

## Functions

Functions are blocks of code that perform a specific task. In C, functions are defined with a return type, a name, and a list of parameters:

```c
int add(int x, int y) {
  return x + y;
}
```

## Pointers

Pointers are variables that store memory addresses. They are used to manipulate memory directly, and are an essential concept in DSA:

```c
int x = 5;
int* ptr = &x;
*ptr = 10; // x now equals 10
```

## Arrays

Arrays are collections of values that are stored in contiguous memory locations. They are commonly used in DSA to store and manipulate data:

```c
int arr[] = {1, 2, 3, 4, 5};
for (int i = 0; i < 5; i) {
  cout << arr[i] << " ";
}
// Output: 1 2 3 4 5
```

## Classes and Objects

Classes and objects are used to create custom data types in C. They are an essential concept in DSA, as many Data Structures are implemented as classes:

```c
Copy code
class Person {
public:
  string name;
  int age;
};

Person p;
p.name = "John";
p.age = 30;
```

## Standard Template Library (STL)

The Standard Template Library (STL) is a collection of powerful Data Structures and Algorithms that are built into C. It includes containers like vectors and maps, and algorithms like sorting and searching. It is recommended to become familiar with STL before diving into DSA:

```c
#include <vector>
#include <algorithm>

vector<int> vec = {3, 2, 1, 5, 4};
sort(vec.begin(), vec.end());
```

## Conclusion

This repository provides a comprehensive collection of popular Data Structures and Algorithms implemented in C. It can be used as a reference for anyone interested in learning and using DSA with C. To get started, simply clone the repository and include the necessary headers in your C code.