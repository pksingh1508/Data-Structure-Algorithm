#include<iostream>
using namespace std;
int main(){

       int n;
       cout<<"Enter the value of n : ";
       cin>>n;

       int a = 0;
       int b = 1;
       cout<<a<<" "<<b<<" ";
       for(int i = 1;i<=n;i++)
       {
        int nextfib = a + b;
        cout<<nextfib<<" ";

        a = b;
        b = nextfib;
       }

return 0;
}