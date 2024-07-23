#include<iostream>
using namespace std;
int main(){

       int n;
       cout<<"Enter the value of n : ";
       cin>>n;

       int i = 1;
       char ch = 65;
       while(i<=n)
       {
        int j = 1;
        while(j<=n)
        {
            cout<<ch<<" ";  // char ch = 'A' + i - 1;
            j = j + 1;
        }
        cout<<endl;
        ch = ch + 1;
        i = i + 1;
       }

return 0;
}