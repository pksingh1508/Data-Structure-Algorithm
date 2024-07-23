#include<iostream>
using namespace std;

        void power()
        {
            int a,b;
            cout<<"Enter the value of a and b : ";
            cin>>a>>b;
            int ans = 1;
            for(int i=1; i<=b; i++)
            {
                ans = ans * a;
            }
            cout<<"power is : "<<ans<<endl;
        }

int main(){

      power();
      power();

return 0;
}