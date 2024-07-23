#include<iostream>
using namespace std;
    bool isPrime(int n)
    {
        if(n<=1)
           return false;
        for(int i=2; i<n; i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }

int main(){
    int n,count=0;
    cout << "Enter a number:";
    cin >> n;

    for(int i=2; i<n; i++)
    {
        if(isPrime(i))
        {
            count++;
        }
    }
    cout << "The total prime number before " << n << " is " << count << endl;

return 0;
}