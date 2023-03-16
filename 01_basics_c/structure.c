// structure is a user defined data type
// that can be used to combine data items of different kinds

#include <stdio.h>

struct Person {
  char name[50];
  int age;
  float height;
};

int main()
{
    struct Person p1;
    strcpy(p1.name, "John");
    p1.age = 30;
    p1.height = 5.8;
    printf("Name: %s\nAge: %d\nHeight: %.2f\n", p1.name, p1.age, p1.height);
    return 0;
}
