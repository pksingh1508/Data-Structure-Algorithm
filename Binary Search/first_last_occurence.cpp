#include<iostream>
using namespace std;

        int firstOccurence(int arr[], int n, int key)
        {
            int s=0, e= n-1, mid, ans = -1;

            while(s<=e)
            {
                mid = s + (e - s)/2;

                if(arr[mid] == key)
                {
                    ans = mid;
                    e = mid -1;
                }
                else if(key > arr[mid])
                {
                    s = mid + 1;
                }
                else if(key < arr[mid])
                {
                    e = mid - 1;
                }
            }
            return ans;
        }


         int lastOccurence(int arr[], int n, int key)
        {
            int s=0, e= n-1, mid, ans = -1;

            while(s<=e)
            {
                mid = s + (e - s)/2;

                if(arr[mid] == key)
                {
                    ans = mid;
                    s = mid + 1;
                }
                else if(key > arr[mid])
                {
                    s = mid + 1;
                }
                else if(key < arr[mid])
                {
                    e = mid - 1;
                }
            }
            return ans;
        }
int main(){

      int even[6] = {5, 7, 8, 8, 8, 8};

        cout<< " the first occurence of 8 is at the index of : " << firstOccurence(even,6,8) << endl;
        cout<< " the last occurence of 8 is at the index of : " << lastOccurence(even,6,8) << endl;

return 0;
}