//----------------MOTIVATION IS TEMPORARY BUT DISPILINE IS PERMANENT--------------------
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Queue {

public:
    Node* front;
    Node* rear;

    Queue() {
        front = NULL;
        rear = NULL;
    }


    void push(int data) {
        // for the first element
        Node* temp = new Node(data);
        if(front == NULL && rear == NULL) {
            rear = temp;
            front = temp;
        }
        else {
            rear->next = temp;
            rear = temp;
        }
    }

    void pop() {
        // check queue is empty or not
        if(front == NULL && rear == NULL) {
            cout << "Queue is empty " << endl;
        }
        else {
            Node* temp = front;
            front = front->next;
            if(front == rear) {
                front = NULL;
                rear = NULL;
            }
            temp->next = NULL;
            free(temp);
        }
    }

    bool empty() {
        return front == NULL && rear == NULL;
    }

};

int main(){

    Queue q;
    q.push(3);
    q.push(4);
    q.push(5);
    cout << q.empty() << endl;



return 0;
}