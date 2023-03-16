#include <iostream>
using namespace std;

// a type of linear dynamic data structure

class Node{
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this -> data = data;
            this -> next = NULL;
        }
};

int main(){
    Node * head = new Node(5);
    Node * tail = head;
    for (int i = 0; i < 4; i++)
    {
        tail -> next = new Node(6+i);
        tail = tail -> next;
    }
    while (head != NULL)
    {
        cout << head -> data << " ";
        head = head-> next;
    }
    
    return 0;
}