#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,count=0;
    cout << "Enter a number.";
    cin >> n;

    vector<bool> prime(n+1,true);
    prime[0] = prime[1] = false;

    for(int i=2; i<n; i++)
    {
        if(prime[i])
        {
            count++;
            for(int j=2*i; j<n; j=j+i)
            {
                prime[j] = 0;
            }
        }
    }
    cout << "Total Prime number is " << count << endl;
return 0;
}