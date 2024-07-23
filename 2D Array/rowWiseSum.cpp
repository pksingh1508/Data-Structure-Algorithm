#include<iostream>
using namespace std;

    void rowSum(int arr[][3],int n,int m)
    {
        int a[3] = {0};
        int i=0,j;
        while(i<n)
        {
            for(j=0; j<m; j++)
            {
                a[i] = a[i] + arr[i][j];
            }
            i++;
        }
        cout << "The row wise sum of 2D array is " << endl;
        for(int i=0; i<3; i++)
        {
            cout << a[i] << " ";
        }cout << endl;
    }

    void colSum(int arr[][3],int n,int m)
    {
        int a[3] = {0};
        int i,j=0;
        while(j<n)
        {
            for(i=0; i<m; i++)
            {
                a[j] = a[j] + arr[i][j];
            }
            j++;
        }
        cout << "The column wise sum of 2D array is " << endl;
        for(int i=0; i<3; i++)
        {
            cout << a[i] << " ";
        }
    }

int main(){
    
    // create 2d array
    int arr[3][3];

    //Taking input
    cout << "Enter the element of the array" << endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing array
    cout << "The element of the array is" << endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    rowSum(arr,3,3);
    colSum(arr,3,3);
return 0;
}