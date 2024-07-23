//----------------MOTIVATION IS TEMPORARY BUT DISCIPLINE IS PERMANENT--------------------
#include<iostream>
using namespace std;

class kQueue {
    public:
        int n;
        int k;
        int *front;
        int *rear;
        int *next;
        int *arr;
        int freeSpot;
    public:
        kQueue(int n, int k) {
            this->n = n;
            this->k = k;
            front = new int[k];
            rear = new int[k];
            for(int i=0; i<k; i++) {
                front[i] = -1;
                rear[i] = -1;
            }
            next = new int[n];
            for(int i=0; i<n; i++) {
                next[i] = i+1;
            }
            next[n-1] = -1;
            arr = new int[n];
            freeSpot = 0;
        } 

        // push operation
        void enque(int data, int qn) {
            // overflow condition
            if(freeSpot == -1) {
                cout << "No empty space is present" << endl;
                return;
            }
            // find first index
            int index = freeSpot;

            // update the freespot
            freeSpot = next[index];

            // check whether first element
            if(front[qn-1] == -1) {
                front[qn-1] = index;
            }
            else {
                // link the new element to the prev element
                next[rear[qn-1]] = index;
            }

            // update next
            next[index] = -1;

            // update rear
            rear[qn-1] = index;

            // push element
            arr[index] = data;
        }

        // pop operation
        int deque(int qn) {
            // underflow
            if(front[qn-1] == -1) {
                cout << "Queue underflow" << endl;
                return -1;
            }
            // find index to pop
            int index = front[qn-1];

            // front ko aage badhao
            front[qn-1] = next[index];

            // freeslot ko manage karo
            next[index] = freeSpot;
            freeSpot = index;

            return arr[index];
        }
};

int main(){

    kQueue q(10, 3);
    q.enque(10, 1);
    q.enque(15, 1);
    q.enque(20, 2);
    q.enque(25, 1);

    cout << q.deque(1) << endl;
    cout << q.deque(2) << endl;
    cout << q.deque(1) << endl;
    cout << q.deque(1) << endl;


return 0;
}