//----------------MOTIVATION IS TEMPORARY BUT DISCIPLINE IS PERMANENT--------------------
#include<iostream>
#include<stack>
using namespace std;

class myQueue {
    private:
        stack<int> s;

        void deleteElement(stack<int> &s, int n) {
            // base case
            if(n == 1) {
                cout << "Popped element are : " << s.top() << endl;
                s.pop();
                return;
            }

            int num = s.top();
            s.pop();
            deleteElement(s,n-1);
            s.push(num);
        }

        void frontElement(stack<int> &s, int n) {
            // base case
            if(n == 1) {
                cout << "Front : " << s.top() << endl;
                return;
            }

            int num = s.top();
            s.pop();
            frontElement(s, n-1);
            s.push(num);
        }

    public:
        void push(int data) {
            s.push(data);
        }

        void pop() {
            if(empty()) {
                cout << "Queue is empty " << endl;
                return;
            }
            int n = s.size();
            deleteElement(s, n);
        }

        void front() {
            if(empty()) {
                cout << "Queue is empty " << endl;
                return;
            }
            int n = s.size();
            frontElement(s, n);
        }

        bool empty() {
            return s.empty();
        }
};

int main(){

    myQueue q;

    q.push(12);
    q.push(14);
    q.push(16);
    q.push(19);
    q.push(11);

    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.front();

return 0;
}