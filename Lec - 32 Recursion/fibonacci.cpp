#include<iostream>
using namespace std;

    int fib(int n)
    {
        // Base Case
        if(n==1)
            return 0;
        if(n>=2 && n<=3)
            return 1;
        
        // Recursive Call
        int ans = fib(n-1) + fib(n-2);
        return ans;
    }

int main(){
    int n;
    cout << "Enter the term of the fibonacci series : " << endl;
    cin >> n;

    int ans = fib(n);
    cout << ans << endl;


return 0;
}