# include <iostream>
using namespace std;

int main(){

    int a; // declaration
    a = 12; // initialization
    cout << "size of int " << sizeof(a) << endl;

    float b;
    cout << "size of float " << sizeof(b) << endl;

    char c;
    cout << "size of char " << sizeof(c) << endl;

    bool d;
    cout << "size of boolean " << sizeof(d) << endl;

    short int si;
    cout << "size of short int " << sizeof(si) <<endl;

    long int li;
    cout << "size of long int " << sizeof(li) <<endl;    

    return 0;
}