#include<iostream>
using namespace std;
    
    int getSum(int *arr, int n)
    {
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            sum += arr[i];
        }
        return sum;
    }

int main(){
    int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;

    // creating array interger in heap memory
    int* arr = new int[n];
    // taking input in array
    cout << "Enter the element of the array " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int ans = getSum(arr,n);
    cout << "the sum of the array is " << ans << endl;

return 0;
}