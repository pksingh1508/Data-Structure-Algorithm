#include<iostream>
using namespace std;
int main(){

         int n;
         cout<<"Enter the value of n : ";
         cin>>n;


            // Method 1
        //  int row = 1;
         
        //  while(row<=n)
        //  {
        //     int col = 1;
        //     int count = row;
        //     while(col<=row)
        //     {
        //         cout<<count<<" ";
        //         count = count - 1;
        //         col = col + 1;
        //     }
        //     cout<<endl;
        //     row = row + 1;
        //  }


            // Method 2
            int i = 1;
            while (i<=n)
            {
                int j = 1;
                while(j<=i)
                {
                    cout<<(i-j+1)<<" ";
                    j = j + 1;
                }
                cout<<endl;
                i = i + 1;
            }
            

return 0;
}