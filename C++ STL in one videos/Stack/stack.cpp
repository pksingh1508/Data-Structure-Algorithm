#include<iostream>
#include<stack>

using namespace std;
int main(){

    stack<string> s;
    s.push("Pawan");
    s.push("Kumar");
    s.push("Singh");

    cout << "Top element -> " << s.top() << endl;

    s.pop();
    cout << "Top element -> " << s.top() << endl;

    cout << "size of stack -> " << s.size() << endl;
    cout << "Empty or not ->" << s.empty() << endl;


return 0;
}