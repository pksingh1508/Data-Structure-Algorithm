//----------------MOTIVATION IS TEMPORARY BUT DISCIPLINE IS PERMANENT--------------------
#include<iostream>
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

node* solve(node* root, int &k, int Node) {
    // base case
    if(root == NULL) {
        return NULL;
    }
    if(root->data == Node) {
        return root;
    }
    node* leftAns = solve(root->left, k, Node);
    node* rightAns = solve(root->right, k, Node);

    if(leftAns != NULL && rightAns == NULL) {
        k--;
        if(k<=0) {
            k = INT8_MAX;
            return root;
        }
        return leftAns;
    }
    if(leftAns == NULL && rightAns != NULL) {
        k--;
        if(k<=0) {
            k = INT8_MAX;
            return root;
        }
        return rightAns;
    }
    return NULL;
}

int main(){
    node* root = NULL;
    root = buildTree(root);

    int k = 2;
    int Node = 4;
    node* ans = solve(root, k, Node);
    if(ans == NULL || ans->data == Node) {
        cout << -1 << endl;
    }
    else {
        cout << "K th Ancestor is " << ans->data << endl;
    }


return 0;
}