#include<iostream>
#include<stack>
using namespace std;

int main(){

    string str = "babbar";
    stack<char> myStack;

    for(int i=0; i<str.size(); i++) {
        char ch = str[i];
        myStack.push(ch);
    }

    string ans = "";
    while(!myStack.empty()) {
        char ch = myStack.top();
        ans.push_back(ch);
        myStack.pop();
    }
    cout << "Answer is : " << ans << endl;

return 0;
}