//----------------MOTIVATION IS TEMPORARY BUT DISCIPLINE IS PERMANENT--------------------
#include<iostream>
#include<stdlib.h>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;
    
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root) {
    int data;
    cout << "Enter the data : " << endl;
    cin >> data;
    root = new node(data);
    if(data == -1) {
        return NULL;
    } 
    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void sumOfLongestPath(node* root, int sum, int &maxSum, int len, int &maxLen) {
    // base case
    if(root == NULL) {
        if(len > maxLen) {
            maxLen = len;
            maxSum = sum;
        }
        else if(len == maxLen) {
            maxSum = max(sum, maxSum);
        }
        return;
    }
    sum = sum + root->data;
    sumOfLongestPath(root->left, sum, maxSum, len+1, maxLen);
    sumOfLongestPath(root->right, sum, maxSum, len+1, maxLen);
}

int main(){
    node* root = NULL;
    root = buildTree(root);

    int sum = 0;
    int maxSum = INT8_MIN;
    int len = 0;
    int maxLen = 0;

    sumOfLongestPath(root, sum, maxSum, len, maxLen);
    cout << "The maximum sum is " << maxSum << endl;
    cout << "The maximum length is " << maxLen << endl;

return 0;
}