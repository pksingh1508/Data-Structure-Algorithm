#include<iostream>
using namespace std;

    int getSquareRoot(int n,int s,int e)
    {
        
        // Base Case
        if(s>e)
            return -1;

        int mid = s + (e-s)/2;
        int square = mid * mid;
        if(square == n){
            return mid;
        }
        int ans = -1;
        if(square > n){
            return getSquareRoot(n,s,mid-1);
        }
        else{
            ans = mid;
            return ans;
            getSquareRoot(n,mid+1,e);
        }
    }

int main(){

    int n;
    cout << "Enter the number to check square root" << endl;
    cin >> n;

    int ans = getSquareRoot(n,0,n);
    cout << "The answer is " << ans  << endl;



return 0;
}