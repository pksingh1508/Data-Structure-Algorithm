#include<iostream>
using namespace std;

    int fact(int n)
    {
        // Base case
        if(n == 1)
            return 1;

        return n * fact(n-1);
    }

int main(){
    int n;
    cout << "Enter the number-> " << endl;
    cin >> n;

    int ans = fact(n);
    cout << "The factorial of " << n << " is " << ans << endl;

return 0;
}