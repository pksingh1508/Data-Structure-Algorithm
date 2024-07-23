#include<iostream>
using namespace std;

// Brut Force
int inversion(int *arr,int n) {
    int count = 0;
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] > arr[j]) {
                count++;
            }
        }
    }
    return count;
}

int main(){
    int arr[8] = {1,20,6,7,5,8,11,3};
    int n = 8;

    int ans = inversion(arr,n);
    cout << "Inversion count " << ans << endl;


return 0;
}