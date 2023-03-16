#include <iostream>
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

void printLL(Node *head)
{
    Node *temp = head; // to prevent head-loss

    while (temp != NULL)
    {
        cout << temp->data << " ->";
        temp = temp->next;
    }
    cout << "NULL";
    return;
}

int main()
{
    int data;
    cin >> data;

    Node *head = NULL;
    Node *tail = NULL;

    while (data != -1) // -1 is the terminator that shows the end of input
    {
        Node *newNode = new Node(data);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else // after getting the first head, this block will run
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }

    printLL(head);
}
