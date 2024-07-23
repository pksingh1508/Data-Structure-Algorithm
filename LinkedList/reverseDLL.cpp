#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory free for node with data " << value << endl;
    }
};

void insertEnd(Node *&head, Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void reverseLL(Node *&head)
{

    Node *back = NULL;
    Node *curr = head;
    Node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = back;
        curr->prev = forward;
        back = curr;
        curr = forward;
    }
    head = back;
}

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    insertEnd(head, tail, 2);
    insertEnd(head, tail, 3);
    insertEnd(head, tail, 4);
    insertEnd(head, tail, 5);
    print(head);

    reverseLL(head);
    print(head);

    return 0;
}