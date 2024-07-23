#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cout << "Enter a number ->";
    cin >> n;
    vector<int> store;
    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;

    for(int i=2; i<n; i++)
    {
        if(prime[i])
        {
            store.push_back(i);
            for(int j=2*i; j<n; j=j+i)
            {
                prime[j] = 0;
            }
        }
    }
    for(int i:store)
    {
        cout << i << " ";
    }

return 0;
}