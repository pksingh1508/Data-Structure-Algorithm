#include<iostream>
using namespace std;
int main(){

       int n;
       cout<<"Enter the value of n : ";
       cin>>n;

       int i = 1;
       while (i<=n)
       {
            // Print karo space
                int space = n-i;
                while (space)
                {
                    cout<<" ";
                    space = space - 1;
                }
            // Print first triangle
                int j = 1;
                while (j<=i)
                {
                    cout<<j;
                    j = j + 1;
                }
            // Print second triangle
                    int start = i - 1;
                    while (start)
                    {
                        cout<<start;
                        start = start - 1;
                    }
                    



            cout<<endl;
            i = i + 1;
       }
       

return 0;
}