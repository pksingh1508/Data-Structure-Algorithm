//----------------MOTIVATION IS TEMPORARY BUT DISPILINE IS PERMANENT--------------------
#include<iostream>
#include<queue>

using namespace std;
int main(){

    // Double Ended Queue Using STL

    deque<int> s;
    s.push_front(2);
    s.push_back(44);

    cout << s.front() << endl;
    cout << s.back() << endl;

    s.pop_front();

    cout << s.front() << endl;
    cout << s.back() << endl;

    s.pop_back();

    if(s.empty()) {
        cout << "Queue is empty" << endl;
    }
    else {
        cout << "Queue is empty" << endl;
    }


return 0;
}