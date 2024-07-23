//----------------MOTIVATION IS TEMPORARY BUT DISPILINE IS PERMANENT--------------------
#include<iostream>
using namespace std;

class queue {
    
        int* arr;
        int size;
        int front;
        int rear;
    public:
        queue() {
            size = 1000;
            arr = new int[size];
            front = 0;
            rear = 0;
        }

        void push(int data) {
            if(rear == size) {
                cout << "size is fulled " << endl;
            }
            else {
                arr[rear] = data;
                rear++;
            }
        }

        int pop() {
            if(front == rear) {
                cout << "queue is empty " << endl;
            }
            else {
                int value = arr[front];
                arr[front] = -1;
                front++;
                if(front == rear) {
                    front = 0;
                    rear = 0;
                }
                return value;
            }
        }

        bool empty() {
            return front == rear;
        }

        int peek() {
            if(empty()) {
                return -1;
            }
            return arr[front];
        }
};

int main(){

    queue s;
    s.push(2);
    s.push(3);
    s.push(4);

    
    cout << "peek is " << s.peek() << endl;
    s.pop(); 
    cout << "peek is " << s.peek() << endl;
    
return 0;
}