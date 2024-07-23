#include<iostream>
#include<vector>
using namespace std;

    void moveZero(int arr1[], int n)
    {
        int i=0;
        for(int j=0; j<n; j++)
        {
            if(arr1[j] != 0)
            {
                swap(arr1[j], arr1[i]);
                i++;
            }
        }
    }
    void print(int arr1[], int m)
    {
        for(int i=0; i<m; i++)
        {
            cout << arr1[i] << " ";
        }
        cout << endl;
    }

int main(){
    int arr1[6] = {0,1,0,3,12,0};

    moveZero(arr1,6);
    print(arr1,6);


return 0;
}