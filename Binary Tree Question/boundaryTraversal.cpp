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
// left part traversal
void traverseLeft(node* root, vector<int> &ans) {
    if( (root == NULL) || (root->left == NULL && root->right == NULL)) {
        return;
    }
    ans.push_back(root->data);
    if(root->left)
        traverseLeft(root->left, ans);
    else 
        traverseLeft(root->right, ans);
}
// leaf Node traversal
void traverseLeafNode(node* root, vector<int> &ans) {
    // base case
    if(root == NULL) {
        return;
    }
    if(root->left == NULL && root->right == NULL) {
        ans.push_back(root->data);
        return;
    }
    if(root->left)
        traverseLeafNode(root->left, ans);
    if(root->right)
        traverseLeafNode(root->right, ans);
}
// right part traversal
void traverseRight(node* root, vector<int> &ans) {
    if( (root == NULL) || (root->left == NULL && root->right == NULL)) {
        return;
    }

    if(root->right)
        traverseRight(root->right, ans);
    else 
        traverseRight(root->left, ans);
    
    ans.push_back(root->data);
}

int main(){
    node* root = NULL;
    root = buildTree(root);

    vector<int> ans;
    ans.push_back(root->data);

    //traverse left part
    traverseLeft(root->left, ans);

    // traverse the leaf node 
        // leaf node in left part
        traverseLeafNode(root->left, ans);
        // leaf node in right part
        traverseLeafNode(root->right, ans);
    
    // traverse the right part
    traverseRight(root->right, ans);

    // printing the result 
    for(auto i:ans) {
        cout << i << " ";
    }

return 0;
}