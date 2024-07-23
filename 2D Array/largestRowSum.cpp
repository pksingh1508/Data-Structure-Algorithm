#include<iostream>
using namespace std;

    int largestRowSum(int arr[][3], int row, int col)
    {
        int maxi = -1;
        int rowIndex = -1;
        for(int row=0; row<3; row++)
        {
            int sum=0;
            for(int col=0; col<3; col++)
            {
                sum += arr[row][col];
            }
            if(sum > maxi)
            {
                maxi = sum;
                rowIndex = row;
            }
        }
        cout << "The maximum sum is :" << maxi << endl;
        return rowIndex;
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
    int ansIndex = largestRowSum(arr,3,3);
    cout << "Max row is at index " << ansIndex << endl;

return 0;
}