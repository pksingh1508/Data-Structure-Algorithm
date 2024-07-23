#include<iostream>
using namespace std;

    void count(int n)
    {
        // Base case
        if(n == 0)
            return;

        cout << n << " ";

        // Recursive relation
        count(n-1); 

        //cout << n << " ";

    }

int main(){
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;

    count(n);

return 0;
}