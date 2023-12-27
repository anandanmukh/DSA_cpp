#include <iostream>
#include <string>

// Function to store primitive data types
void storePrimitiveDataTypes() {
    // Integer variable
    int num = 10;

    // Floating-point variable
    float pi = 3.14;

    // Character variable
    char letter = 'A';

    // Boolean variable
    bool isTrue = true;

    // Output the values
    std::cout << "Integer: " << num << std::endl;
    std::cout << "Floating-point: " << pi << std::endl;
    std::cout << "Character: " << letter << std::endl;
    std::cout << "Boolean: " << isTrue << std::endl;
}

// Function to store derived data types
void storeDerivedDataTypes() {
    // Array of integers
    int numbers[] = {1, 2, 3, 4, 5};

    // Output the values
    std::cout << "Array of integers: ";
    for (int i = 0; i < 5; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Pointer to an integer
    int* ptr = new int(10);

    // Output the value
    std::cout << "Pointer to an integer: " << *ptr << std::endl;

    // Delete the dynamically allocated memory
    delete ptr;
}

// User-defined class
class MyClass {
public:
    std::string name;

    // Constructor
    MyClass(const std::string& n) : name(n) {}

    // Function to display the name
    void display() {
        std::cout << "Name: " << name << std::endl;
    }
};

// Function to store user-defined data types
void storeUserDefinedDataTypes() {
    // Create an object of MyClass
    MyClass obj("anandanmukh.github.io");

    // Call the display function
    obj.display();
}

int main() {
    // Store primitive data types
    storePrimitiveDataTypes();

    // Store derived data types
    storeDerivedDataTypes();

    // Store user-defined data types
    storeUserDefinedDataTypes();

    return 0;
}


