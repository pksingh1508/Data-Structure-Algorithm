#include<iostream>
using namespace std;

    // Using 2 pointer approach
    string getReverse(string s,int i, int j) {
        // Base Case
        if(i>j)
            return s;
        
        swap(s[i],s[j]);
        i++;
        j--;
        return getReverse(s,i,j);
    }

    // Using 1 pointer approach
    void reverse(string& str,int i,int n) {
        // Base Case
        if(i > n/2)
            return;
        
        swap(str[i],str[n-i-1]);
        i++;

        reverse(str,n,i);
    }

int main(){
    string s = "raj";
    int n = s.length();

    string ans = getReverse(s,0,n-1);
    cout << "The string is " << ans << endl;

    reverse(s,0,n);
    cout << s << endl;


return 0;
}