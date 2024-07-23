#include<iostream>
using namespace std;

    // void print(int *arr, int n)
    // {
    //     cout << "The size of the array is " << n << endl;

    //     for(int i=0; i<n; i++)
    //     {
    //         cout << arr[i] << " ";
    //     } cout << endl;
    // }

    bool isPresent(int *arr,int n, int key)
    {
        //print(arr,n);
        // Base Case
        if(n == 0)
            return false;

        if(arr[0] == key){
            return true;
        }
        else
        {
            bool remainingPart = isPresent(arr+1,n-1,key);
            return remainingPart;
        }
    }

int main(){
    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 6;
    bool ans = isPresent(arr,size,key);
    if(ans)
        cout << "Found ?" << endl;
    else
        cout << "Not found ? " << endl;
    

return 0;
}