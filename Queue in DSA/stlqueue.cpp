//----------------MOTIVATION IS TEMPORARY BUT DISPILINE IS PERMANENT--------------------
#include<iostream>
#include<queue>
using namespace std;
int main(){

    // creation of queue using STL
    queue<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << "front of queue is : " << s.front() << endl;
    cout << "size of the queue is : " << s.size() << endl;
    s.pop();
    cout << "size of the queue is : " << s.size() << endl;
    cout << "front of queue is : " << s.front() << endl;

    if(s.empty()) {
        cout << "queue is empty " << endl;
    }
    else {
        cout << "queue is not empty " << endl;
    }

return 0;
}