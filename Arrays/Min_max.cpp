#include<iostream>
using namespace std;

        int getMax(int num[], int n)
        {
            int maximum = INT16_MIN;

            for(int i=0; i<n; i++)
            {
                maximum = max(maximum, num[i]);

                // if(num[i] > max)
                // {
                //     max = num[i];
                // }
            }
            return maximum;
        }

         int getMin(int num[], int n)
        {
            int minimum = INT16_MAX;

            for(int i=0; i<n; i++)
            {

                minimum = min(minimum, num[i]);

                // if(num[i] < min)
                // {
                //     min = num[i];
                // }
            }
            return minimum;
        }
int main(){

      int size;
      cout << " Enter the size of the array : ";
      cin >> size;

      int num[100];
      // taking input in array
      for(int i = 0; i<size; i++)
      {
         cin >> num[i];
      }

      cout << " Maximum value is " << getMax(num, size) << endl;
      cout << " Minimum value is " << getMin(num, size) << endl;




return 0;
}