//----------------MOTIVATION IS TEMPORARY BUT DISCIPLINE IS PERMANENT--------------------
#include<iostream>
#include<vector>
#include<deque>
using namespace std;

vector<int> printFirstNegativeInteger(int A[], int n, int k) {
    deque<int> dq;
    vector<int> ans;

    // -------------------Approach no 2(Optimal approach)-------------------------------
    // int firstNegativeIndex = 0;
    // int firstNegativeElement;

    // for(int i=k-1; i<n; i++) {
    //     // skip out the window and the positive element
    //     while((firstNegativeIndex < i) && (firstNegativeIndex <= i-k || A[firstNegativeIndex] >= 0)) {
    //         firstNegativeIndex++;
    //     }
    //     // check if a negative element is found or use 0
    //     if(A[firstNegativeIndex] < 0) {
    //         firstNegativeElement = A[firstNegativeIndex];
    //     }
    //     else {
    //         firstNegativeElement = 0;
    //     }
    //     ans.push_back(firstNegativeElement);
    // }
    // return ans;



    // ------------------ Approach no 1 -------------------------------
    //traverse the first k window
    for(int i=0; i<k; i++) {
        if(A[i] < 0) {
            dq.push_back(i);
        }
    }
    // store the ans of first k window
    if(dq.size() > 0) {
        ans.push_back(A[dq.front()]);
    }
    else {
        ans.push_back(0);
    }
    // iterate the remaining window
    for(int i=k; i<n; i++) {
        // remove
        if(!dq.empty() && dq.front() < i-k+1) {
            dq.pop_front();
        }

        if(A[i] < 0) {
            dq.push_back(i);
        }

        if(dq.size() > 0) {
            ans.push_back(A[dq.front()]);
        }
        else {
            ans.push_back(0);
        }
    }
    return ans;
}

int main(){

    int A[] = {-8, 2, 3, -6, 10};
    int n = 5;
    int k = 2;
    vector<int> ans;
    ans = printFirstNegativeInteger(A, n, k);
    for(int i : ans){
        cout << i << " ";
    }

return 0;
}