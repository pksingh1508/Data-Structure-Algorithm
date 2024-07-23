#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;

    // constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Stack {
    Node *top;
    public:

        Stack() {
            top = NULL;
        }

    void push(int data) {
        Node* temp = new Node(data);
        if(!temp) {
            cout << "Stack Overflow" << endl;
            return;
        }
        temp->data = data;
        temp->next = top;
        top = temp;
    }

    bool isEmpty() {
        return top == NULL;
    }

    void peek() {
        if(isEmpty()) {
            cout << "Stack UnderFlow " << endl;
            return;
        } 
        else {
            cout << "Peek data is = " << top->data << endl;
        }
    }

    void pop() {
        if(isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        else {
            Node* temp = top;
            top = top->next;
            free (temp);
        }
    }
    void print() {
        Node* temp = top;
        while(temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){

    Stack s;
    s.push(34);
    s.push(39);
    s.push(30);
    s.print();

    s.pop();
    s.print();
    s.peek();



return 0;
}