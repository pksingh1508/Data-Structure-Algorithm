#include<iostream>
using namespace std;

int main(){
    int row;
    cout << "Enter the value of row " << endl;
    cin >> row;

    int col;
    cout << "Enter the value of col " << endl;
    cin >> col;

    int **arr = new int*[row];

    // Creating a 2d array
    for(int i=0; i<row; i++)
    {
        arr[i] = new int[col];
    }

    // Taking input in 2d array
    cout << "Enter the element of the array " << endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Printing the 2d array
    cout << "The element of the array is " << endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Releasing Memory
    for(int i=0; i<row; i++)
    {
        delete [] arr[i];
    }

    delete []arr;



return 0;
}