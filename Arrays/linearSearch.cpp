#include<iostream>
using namespace std;

        bool search(int arr[], int n, int key)
        {
            for(int i = 0; i<n; i++)
            {
                if(arr[i] == key)
                {
                    return 1;
                }
            }
            return 0;
        }
int main(){

      int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

      int key;
      cout<<"Enter the key to search : ";
      cin>>key;

      bool found = search(arr, 10, key);

      if(found)
      {
        cout<< " key is present " << endl;
      }
      else
      {
        cout<<" key is not present " << endl;
      }
return 0;
}