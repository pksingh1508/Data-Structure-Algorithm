#include<iostream>
#include<stack>
using namespace std;

// Stack implementation using array
class Stack {
    // data member
    public:
        int *arr;
        int top;
        int size;

    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    // behviour
    void push(int element ) {
        if(size - top > 1) {
            top++;
            arr[top] = element;
        }
        else {
            cout << "Stack OverFlow" << endl;
        }
    }

    void pop() {
        if(top >= 0) {
            top--;
        }
        else {
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek() {
        if(top >= 0)
            return arr[top];
        else {
            cout << "Stack is empty " << endl;
            return -1;
        }
    }

    bool isEmpty() {
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

    void print() {
        int cnt = 0;
        int temp = top;
        while(temp >= cnt) {
            cout << arr[temp] << endl;
            temp--;
        }
        cout << endl;
    }

};

int main(){

    Stack st(5);

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    st.print();
    st.pop();
    st.print();
    

    

    /*
    // creation of stack using STL
    stack<int> s;
    s.push(3);
    s.push(2);

    s.pop();

    cout << "printing the top element " << s.top() << endl;
    if(s.empty()) {
        cout << "Stack is empty " << endl;
    }
    else {
        cout << "Stack is not empty " << endl;
    }

    cout << "size is " << s.size() << endl;

    */


return 0;
}