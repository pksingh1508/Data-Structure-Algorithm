#include<iostream>
using namespace std;

            int firstOccurence(int arr[], int n, int key)
            {
                int s = 0, e = n - 1, mid, ans = -1;
                while (s<=e)
                {
                    mid = s + (e-s)/2;
                    if(arr[mid] == key)
                    {
                        ans = mid;
                        e = mid - 1;
                    }
                    else if (key > arr[mid])
                    {
                        s = mid + 1;
                    }
                    else if (key < arr[mid])
                    {
                        e = mid - 1;
                    }
                }
                return ans;
            }

            int lastOccurence(int arr[], int n, int key)
            {
                int s = 0, e = n-1, mid, ans = -1;

                while (s <= e)
                {
                    mid = s + (e-s)/2;
                    if (arr[mid] == key)
                    {
                        ans = mid;
                        s = mid + 1;
                    }
                    else if (key > arr[mid])
                    {
                        s = mid + 1;
                    }
                    else if (key < arr[mid])
                    {
                        e = mid - 1;
                    }
                }
                return ans;
            }
int main(){

        int n, p, q, key;
        cout << "Enter the size of array : ";
        cin >> n;

        int arr[n];
        cout << "Enter the element of array : ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Enter the key : ";
        cin >> key;

        p = firstOccurence(arr,n,key);
        q = lastOccurence(arr,n,key);

        cout << "The first and last Position are : " << p << " , " << q <<endl;;
        cout << "The total number of Occurence is : " << (q-p) +1;
        
return 0;
}