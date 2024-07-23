#include<iostream>
using namespace std;

    bool checkPalindrome(string& str,int i, int n) {
        // Base Case
        if(i > n/2)
            return false;
        
        if(str[i] != str[n-i-1]){
            return false;
        }

        if(str[i] == str[n-i-1]){
            return true;
        }
        else{
            return checkPalindrome(str,i++,n);
        }

    }

int main(){

    string str = "bookkoob";
    int n = str.length();

    bool ans = checkPalindrome(str,0,n);
    if(ans){
        cout << "Palindrome String" << endl;
    }
    else{
        cout << "Not Palindrome String" << endl;
    }


return 0;
}