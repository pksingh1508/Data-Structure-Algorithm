#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    int **arr = new int*[n];

    // Creating a 2d array
    for(int i=0; i<n; i++)
    {
        arr[i] = new int[n];
    }

    // Taking input in 2d array
    cout << "Enter the element of the array " << endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Printing the 2d array
    cout << "The element of the array is " << endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


return 0;
}