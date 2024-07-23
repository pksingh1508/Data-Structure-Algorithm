#include<iostream>
using namespace std;

    bool isPresent(int arr[][4], int target, int row, int col )
    {
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(arr[i][j] == target)
                {
                    return 1;
                }
            }
        }
        return 0;
    }

int main(){
    // create 2d array
    int arr[3][4];

    //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,13};
    // int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    //Taking input
    cout << "Enter the element of the array" << endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing array
    cout << "The element of the array is" << endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the element to be searched : " << endl;
    int target;
    cin >> target;

    if(isPresent(arr,target,3,4))
    {
        cout << "Element found :" << endl;
    }
    else
    {
        cout << "Element NOt Found : " << endl;
    }

return 0;
}