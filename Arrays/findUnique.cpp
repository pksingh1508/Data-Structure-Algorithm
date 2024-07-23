#include<iostream>
using namespace std;

        int findUnique(int arr[], int n)
        {
            int ans = 0;
            for(int i = 0; i<n; i++)
            {
                ans = ans ^ arr[i];
            }
            return ans;
        }
int main(){

      int arr[5] = {1, 2, 3, 3, 1};

        cout<<" the unique element is : " << findUnique(arr,5);

return 0;
}