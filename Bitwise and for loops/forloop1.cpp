#include<iostream>
using namespace std;
int main(){

       int n;
       cout<<"Enter the value of n : ";
       cin>>n;

    //    cout<<"Printing count from 1 to N " <<endl;
    //     int i = 1;
    //    for (; ; )
    //    {
    //     if(i <= n){

    //     cout<<i<<endl;
    //     }
    //     else{
    //         break;
    //     }
    //     i++;
    //    }

    // for(int i=0,j=1;i>=0 && j>=1;i--,j--)
    // {
    //     cout<<i<<" "<<j<<endl;
    // }
        int sum = 0;
    for(int i=1;i<=n;i++)
    {
            sum += i;
    }
    cout<<sum<<endl;
       


return 0;
}