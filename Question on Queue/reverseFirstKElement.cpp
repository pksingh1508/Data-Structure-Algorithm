//----------------MOTIVATION IS TEMPORARY BUT DISCIPLINE IS PERMANENT--------------------
#include<iostream>
#include<stack>
#include<queue>
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
void modifyQueue(queue<int> &qt, int k, int n) {
    stack<int> s;
    // fetch the first k element from the queue
    for(int i=0; i<k; i++) {
        int num = qt.front();
        qt.pop();
        s.push(num);
    }
    while(!s.empty()) {
        int num = s.top();
        s.pop();
        qt.push(num);
    }
    for(int i=0; i<n-k; i++) {
        int num = qt.front();
        qt.pop();
        qt.push(num);
    }

}

int main(){

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    int n = q.size();
    modifyQueue(q, 4, n);

    print(q);


return 0;
}