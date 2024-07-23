#include<iostream>
using namespace std;
int main(){

        int n,mid;
        cout << "Enter the size of array : ";
        cin >> n;

        int arr[n];
        cout << "Enter the element of array : ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int s = 0;
        int e = n - 1;
        while (s < e)
        {
            mid = s + (e-s)/2;
            if(arr[mid] < arr[mid+1])
            {
                s = mid + 1;
            }
            else{
                e = mid;
            }
        }

        cout << "The peak index is : " << s;
        
return 0;
}