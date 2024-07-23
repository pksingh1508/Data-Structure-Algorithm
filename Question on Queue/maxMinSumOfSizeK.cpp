//----------------MOTIVATION IS TEMPORARY BUT DISCIPLINE IS PERMANENT--------------------
#include<iostream>
#include<deque>
using namespace std;

int solve(int *arr, int n, int k) {
    deque<int> maxi(k);
    deque<int> mini(k);

    // Addition of first k size window
    for(int i=0; i<k; i++) {
        while(!maxi.empty() && arr[maxi.back()] <= arr[i])
            maxi.pop_back();
        
        while(!mini.empty() && arr[mini.back()] >= arr[i])
            mini.pop_back();

        maxi.push_back(i);
        mini.push_back(i);
    }
    int ans = 0;
    ans += arr[maxi.front()] + arr[mini.front()];

    // check the remaining window
    for(int i=k; i<n; i++) {
        
        // removal of one element from the window
        while(!maxi.empty() && i-maxi.front() >=k) {
            maxi.pop_front();
        }
        while(!mini.empty() && i-mini.front() >=k) {
            mini.pop_front();
        }

        // addition of one element from the window
        while(!maxi.empty() && arr[maxi.back()] <= arr[i])
            maxi.pop_back();
        
        while(!mini.empty() && arr[mini.back()] >= arr[i])
            mini.pop_back();

        maxi.push_back(i);
        mini.push_back(i);

        ans += arr[maxi.front()] + arr[mini.front()];
    }
    return ans;
}

int main(){

    int arr[7] = {2, 5, -1, 7, -3, -1, -2};
    int k = 4;
    int sum = solve(arr, 7, k);
    cout << "The sum of maximum ans minimum is " << sum << endl;

return 0;
}