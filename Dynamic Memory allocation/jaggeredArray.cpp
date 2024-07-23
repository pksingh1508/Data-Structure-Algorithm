#include<iostream>
using namespace std;

int main(){
    int row,col1,col2,col3;
    cout << "Enter the size of row " << endl;
    cin >> row;
    cout << "Enter the element in first, second, third column" << endl;
    cin >> col1 >> col2 >> col3;

    int **arr = new int*[row];
   
    arr[0] = new int[col1];
    arr[1] = new int[col2];
    arr[2] = new int[col3];

    // Taking Input in 2d Array
    cout << "Enter the element of the array " << endl;
    for(int i=0; i<row; i++)
    {
        if(i==0)
        {
            for(int j=0; j<col1; j++)
            {
                cin >> arr[i][j];
            }
        }
        else if(i==1)
        {
            for(int j=0; j<col2; j++)
            {
                cin >> arr[i][j];
            }
        }
        else
        {
            for(int j=0; j<col3; j++)
            {
                cin >> arr[i][j];
            }
        }
    }

    // Printing the 2d array
    for(int i=0; i<row; i++)
    {
        if(i==0)
        {
            for(int j=0; j<col1; j++)
            {
                cout << arr[i][j] << " ";
            }cout << endl;
        }
        else if(i==1)
        {
            for(int j=0; j<col2; j++)
            {
                cout << arr[i][j] << " ";
            }cout << endl;
        }
        else
        {
            for(int j=0; j<col3; j++)
            {
                cout << arr[i][j] << " ";
            }cout << endl;
        }
    }

    // Releasing Memory
    for(int i=0; i<row; i++)
    {
        delete [] arr[i];
    }
    delete [] arr;
    
    

return 0;
}