#include<iostream>
using namespace std;

    int getSum(int *arr,int n)
    {
        // Base Case
        if(n == 0)
            return 0;
        if(n == 1)
            return arr[0];

        int remainingPart = getSum(arr+1,n-1);
        int sum = arr[0] + remainingPart;
        return sum;

        // if(n == 0)
        //     return 0;
        
        // int ans = arr[0];
        // ans += getSum(arr+1,n-1);
        // return ans;
    }

int main(){
    int arr[5] = {2,5,3,6,4};
    int size = 5;

    int ans = getSum(arr,size);

    cout << "The sum is " << ans << endl;

return 0;
}