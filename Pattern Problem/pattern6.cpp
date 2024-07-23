#include<iostream>
using namespace std;
int main(){

        int n;
        cout<<"Enter the value of n : ";
        cin>>n;
        int count = 1;
        int row = 1;
        while (row<=n)
        {
            int col = 1;
            while(col<=row)
            {
                cout<<count<<" ";
                count = count + 1;
                col = col + 1;
            }
            cout<<endl;
            row = row + 1;
            count = row;
        }


        // int row = 1;
        // while (row<=n)
        // {
        //     int col = 1;
        //     while (col<=row)
        //     {

        //         cout<<col<<" ";
        //         col = col + 1;
        //     }
        //     cout<<endl;
        //     row = row + 1;
            
        // }
        



        

return 0;
}