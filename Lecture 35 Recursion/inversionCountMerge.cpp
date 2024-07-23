#include<iostream>
using namespace std;

int merge(int arr1[],int size1, int arr2[],int size2, int temp[]) {
    int count = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    while(a < size1 && b < size2) {
        if(arr1[a] < arr2[b]) {
            temp[c++] = arr1[a++];
        }
        else {
            temp[c++] = arr2[b++];
            count = count + size1 - a;
        }
    }
    while(a < size1) {
        temp[c++] = arr1[a++];
    }

    while(b < size2) {
        temp[c++] = arr2[b++];
    }
    return count;
}

int countInversion(int arr[], int size) {
    if(size > 1) {
        int mid = size/2;
        int count1 = countInversion(arr,mid);
        int count2 = countInversion(arr+mid, size - mid);
        int temp[size];
        int count3 = merge(arr,mid,arr+mid,size-mid,temp);
        for(int x=0; x<size; x++) {
            arr[x] = temp[x];
        }
        return count1 + count2 + count3;
    }
    else {
        return 0;
    }
}



int main(){
    int arr[] = {1,20,6,7,5,8,11,3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int ans = countInversion(arr,size);
    cout << " The number of inversion is " << ans << endl;

return 0;
}