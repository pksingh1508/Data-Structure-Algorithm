#include<iostream>
using namespace std;

        int binarySearch(int arr[], int n, int key)
        {
            int start = 0;
            int end = n-1;
            int mid;

            while(start<=end)
            {
                mid = start + (end - start)/2;
                if(arr[mid] == key)
                {
                    return mid;
                }

                if(key > arr[mid])
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
            return -1;
        }
int main(){

     int even[6] = {2, 5, 9, 12, 23, 33};
     int odd[5] = {3, 7, 9, 11, 17};

     int index = binarySearch(even, 6, 12);
     cout<<"The index is : " << index << endl;

      int index1 = binarySearch(odd, 5, 7);
     cout<<"The index1 is : " << index1 << endl;


return 0;
}