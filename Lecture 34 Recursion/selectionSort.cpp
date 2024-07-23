#include<iostream>
using namespace std;

    void sortArray(int *arr,int n) {
        // Base Case
        if(n==0 || n==1)
            return;

        // ek case solve karlo
        for(int i=0; i<n-1; i++) {
            int minIndex = i;
            for(int j=i+1; j<n; j++){
                if(arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            swap(arr[minIndex], arr[i]);
        } 

        sortArray(arr+1,n-1);
    }

int main(){

    int arr[5] = {6,4,3,2,1};
    int n = 5;
    sortArray(arr,n);
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

return 0;
}