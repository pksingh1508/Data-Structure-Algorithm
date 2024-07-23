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

node* lca(node* root, int n1, int n2) {
    // base case
    if(root == NULL) {
        return NULL;
    }
    if(root->data == n1 || root->data == n2) {
        return root;
    }
    node* leftAns = lca(root->left, n1, n2);
    node* rightAns = lca(root->right, n1, n2);

    if(leftAns != NULL && rightAns != NULL) {
        return root;
    }
    else if(leftAns != NULL && rightAns == NULL) {
        return leftAns;
    }
    else if(leftAns == NULL && rightAns != NULL) {
        return rightAns;
    }
    else{
        return NULL;
    }

}


int main(){
    node* root = NULL;
    root = buildTree(root);

    int n1, n2;
    cout << "Enter the value of n1 " << endl;
    cin >> n1;
    cout << "Enter the value of n2 " << endl;
    cin >> n2;

    node* ans = lca(root, n1, n2);
    cout << "Lowest Commom Ancestor " << ans->data << endl;

return 0;
}