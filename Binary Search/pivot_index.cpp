#include<iostream>
using namespace std;

        int getPivot(int arr[], int n)
        {
            int s=0, e=n-1;
            int mid = s + (e-s)/2;

            while(s<e)
            {
                if(arr[mid] >= arr[0])
                {
                    s = mid + 1;
                }
                else
                {
                    e = mid;
                }
                mid = s + (e-s)/2;
            }
            return s;
        }
int main(){

        int arr[6] = {1,7,3,6,5,6};

        // int ans = getPivot(arr,5);
        cout << "The ans is : " << getPivot(arr,6) << endl;
return 0;
}