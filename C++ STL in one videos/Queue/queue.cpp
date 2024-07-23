#include<iostream>
#include<queue>

using namespace std;
int main(){

    queue<string> q;
    q.push("Pawan");
    q.push("Kumar");
    q.push("Singh");

    cout << "First element -> " << q.front() << endl;
    cout << "size before  pop is -> " << q.size() << endl;


    q.pop();
    cout << "First element -> " << q.front() << endl;

    cout << "size after pop is -> " << q.size() << endl;


return 0;
}