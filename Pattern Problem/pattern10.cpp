#include<iostream>
using namespace std;
int main(){

        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        int i = 1;
        char st = 'A';
        while(i<=n)
        {
            int j = 1;
            while(j<=n)
            {
                cout<<st<<" ";
                st = st + 1;
                j = j + 1;
            }
            cout<<endl;
            i = i + 1;
        }

return 0;
}