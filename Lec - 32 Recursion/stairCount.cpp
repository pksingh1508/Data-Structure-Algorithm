#include<iostream>
using namespace std;
    int stairCount(int nStair)
    {
        // Base Case
        if(nStair<0)
            return 0;
        if(nStair==0)
            return 1;

        // Recursive Call
        int ans = stairCount(nStair-1) + stairCount(nStair-2);

        return ans;
    }

int main(){
    int stair;
    cout << "Enter the number of stairs : " << endl;
    cin >> stair;

    int ans = stairCount(stair);
    cout << ans << endl;

return 0;
}