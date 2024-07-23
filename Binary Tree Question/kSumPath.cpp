//----------------MOTIVATION IS TEMPORARY BUT DISCIPLINE IS PERMANENT--------------------
#include<iostream>
#include<vector>
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

void kSumPath(node* root, int &count, vector<int> path, int k) {
    // base case
    if(root == NULL ) {
        return;
    }
    path.push_back(root->data);
    kSumPath(root->left, count, path, k);
    kSumPath(root->right, count, path, k);

    // compare
    int n = path.size();
    int sum = 0;
    for(int i=n-1; i>=0; i--) {
        sum += path[i];
        if(sum == k) {
            count++;
        }
    }
    path.pop_back();
}

int main(){
    node* root = NULL;
    root = buildTree(root);

    int k;
    cout << "Enter the value of k " << endl;
    cin >> k;
    vector<int> path;
    int count = 0;
    kSumPath(root, count, path, k);
    cout << "The number of path is " << count << endl;


return 0;
}