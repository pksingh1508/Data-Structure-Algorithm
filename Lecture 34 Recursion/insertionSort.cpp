#include<iostream>
using namespace std;

    void sortArray(int *arr,int n) {
        // Base Case
        if(n <= 1)
            return;

        // sort first n-1 element
        sortArray(arr,n-1);
        // Insert last element at its correct position in sorted array
        int last = arr[n-1];
        int j = n-2;
        while(j >= 0 && arr[j] > last) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = last;
    }

    void printArray(int *arr,int n) {
        for(int i=0; i<n; i++) {
            cout << arr[i] << " ";
        } cout << endl;
    }

int main(){

    int arr[5] = {6,4,3,2,1};
    int n = 5;

    sortArray(arr,n);
    printArray(arr,n);
    


return 0;
}