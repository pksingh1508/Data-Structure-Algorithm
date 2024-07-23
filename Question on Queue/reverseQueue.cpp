//----------------MOTIVATION IS TEMPORARY BUT DISCIPLINE IS PERMANENT--------------------
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void print(queue<int> t) {
    if(t.empty()){
        cout << endl;
        return;
    }
    int num = t.front();
    t.pop();
    cout << num << " ";
    print(t);
}

void reverse(queue<int> &q) {
    stack<int> st;
    while(!q.empty()) {
        int num = q.front();
        q.pop();
        st.push(num);
    }
    while(!st.empty()) {
        int num = st.top();
        st.pop();
        q.push(num);
    }
}

int main(){

    queue<int> s;
    s.push(4);
    s.push(3);
    s.push(1);
    s.push(10);
    s.push(2);
    s.push(6);
    print(s);
    reverse(s);
    print(s);
    
return 0;
}