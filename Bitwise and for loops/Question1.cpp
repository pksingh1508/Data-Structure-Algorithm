#include<iostream>
using namespace std;
int main(){

       int n,sum=0,product=1;
       cout<<"Enter the number : ";
       cin>>n;

        while(n!=0)
        {
            int rem = n%10;
            sum += rem;
            product *= rem;
            n=n/10;
        }

        // for(int i = n;i>0;i=n/10)
        // {
        //     int rem = n % 10;
        //     sum += rem;
        //     product *= rem;
        // }
       cout<<"The sum is : "<<sum<<endl;
       cout<<"The product is : "<<product<<endl;
       cout<<"The difference between sum and product is : "<<product - sum<<endl;

return 0;
}