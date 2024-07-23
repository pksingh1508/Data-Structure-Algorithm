//----------------MOTIVATION IS TEMPORARY BUT DISCIPLINE IS PERMANENT--------------------
#include<iostream>
#include<map>
#include<queue>
using namespace std;

void firstNonRepeating(string A) {
    int n = A.length();
    map<char, int> count;
    queue<int> q;
    string ans = "";
    for(int i=0; i<n; i++) {
        char ch = A[i];
        count[ch]++;
        q.push(ch);

        while(!q.empty()) {
            if(count[q.front()] > 1) {
                q.pop();
            } 
            else {
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty())
            ans.push_back('#');
    }
    cout << ans << endl;
}

int main(){
    string a = "aabc";
    firstNonRepeating(a);

return 0;
}