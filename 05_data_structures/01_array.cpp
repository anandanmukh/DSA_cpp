#include <iostream>
using namespace std;

int main(){
    // arrays are stored in a continuous memory allocation
    int sample_marks[5];
    sample_marks[0] = 10, sample_marks[1] = 15, sample_marks[2] = 60, sample_marks[3] = 10, sample_marks[4] = 50;
    for (int i = 0; i < 5; i++)
    {
        cout << sample_marks[i] <<" ";
    }
    return 0;
}