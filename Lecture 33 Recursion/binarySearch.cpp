#include<iostream>
using namespace std;

    void print(int arr[], int s, int e){
        for(int i=s; i<=e; i++){
            cout << arr[i] << " ";
        } cout << endl;
    }

    bool binarySearch(int *arr,int s,int e,int key)
    {
        print(arr,s,e);
        // Base Case 1. element not found
        if(s>e)
            return false;
        
        int mid = s + (e-s)/2;

        // element found
        if(arr[mid] == key)
            return true;
       
        if(arr[mid] < key){
            return binarySearch(arr,mid+1,e,key);
        }
        else{
            return binarySearch(arr,s,mid-1,key);
        }

    }

int main(){

    int arr[6] = {2,4,6,10,14,16};
    int key = 16;

    bool ans = binarySearch(arr,0,5,key);
    
    if(ans)
        cout << "Found." << endl;
    else
        cout << "Not Found." << endl;

return 0;
}