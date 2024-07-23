#include<iostream>
using namespace std;

    void print(int arr[], int n, int start=0)
    {
        for(int i=start; i<n; i++)
        {
            cout << arr[i] << " ";
        }
    }

int main(){
    int arr[5] = {1,2,5,7,4};
    int size = 5;

    print(arr,size);
    cout << endl;
    print(arr,size,2);


return 0;
}