#include<iostream>
using namespace std;

    void sortArray(int *arr,int n) {
        // Base Case
        if(n==0 || n==1)
            return;
        
        // 1 case solve karlo 
        for(int i=0; i<n-1; i++){
            if(arr[i] > arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }

        sortArray(arr,n-1);
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