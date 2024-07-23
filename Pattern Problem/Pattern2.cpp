#include<iostream>
using namespace std;
int main(){

    // Code for printing 1 2 3 4 5 6 7 .....
       int n;
       cout<<"Enter the value of n ";
       cin>>n;
       int i =1;
       int count = 1;
       while (i<=n)
       {
        int j = 1;
        while(j<=n)
        {
            cout<<count<<" ";
            count = count + 1;
            j=j+1;
        }
        cout<<endl;
        i = i+1;
       }
       

return 0;
}