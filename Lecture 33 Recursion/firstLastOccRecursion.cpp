#include<iostream>
using namespace std;

    int firstOccurence(int arr[],int s,int e,int k)
    {
        // Base Case
        if(s>e) 
            return -1;
        
        int mid = s + (e-s)/2;
        
        int ans = -1;
        if(arr[mid] == k){
            firstOccurence(arr,s,mid-1,k);
            ans = mid;
            return ans;
        }
        else if(k > arr[mid]){
            return firstOccurence(arr,mid+1,e,k);
        }
        else if(k < arr[mid]){
            return firstOccurence(arr,s,mid-1,k);
        }      
    }

    int lastOccurence(int arr[],int s,int e,int k)
    {
        // Base Case
        if(s>e) 
            return -1;
        
        int mid = s + (e-s)/2;
        
        int ans = -1;
        if(arr[mid] == k){
            lastOccurence(arr,mid+1,e,k);
            ans = mid;
            return ans;
        }
        else if(k > arr[mid]){
            return lastOccurence(arr,mid+1,e,k);
        }
        else if(k < arr[mid]){
            return lastOccurence(arr,s,mid-1,k);
        }      
    }

int main(){

    int arr[6] = {5, 7, 8, 8, 8, 8};
    int k = 8;
    cout << "The first Occurence of the element is " << firstOccurence(arr,0,5,k) << endl;
    cout << "The last Occurence of the element is " << lastOccurence(arr,0,5,k) << endl;


return 0;
}