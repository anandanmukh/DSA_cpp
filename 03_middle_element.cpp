#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;   // to store the data
    Node *next; // to store the address of the next pointer

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

int length(Node* head){
    int count = 0;
    while (head != NULL)
    {
        count++;
    }
    return count;
}

Node* getIndexValue(Node* head, int idx){
    int i = 0;
    while (i < idx)
    {
        head = head -> next;
        i++;
    }
    return head;
}

Node *findMiddle(Node *head){
    int len = length(head);
    int mid_idx = len/2;
    return getIndexValue(head, mid_idx);
}
