//----------------MOTIVATION IS TEMPORARY BUT DISCIPLINE IS PERMANENT--------------------
#include<iostream>
#include<map>
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

void diagonalPrintUtil(node* root, int d, map<int, vector<int> > &diagonalprint) {
    // base case
    if(root == NULL) {
        return;
    }
    diagonalprint[d].push_back(root->data);
    diagonalPrintUtil(root->left, d+1, diagonalprint);
    diagonalPrintUtil(root->right, d, diagonalprint);
}

int main(){
    node* root = NULL;
    root = buildTree(root);

    map<int, vector<int> > diagonalprint;
    diagonalPrintUtil(root, 0, diagonalprint);
    for(auto i:diagonalprint){
        vector<int> v = i.second;
        for(auto i:v)
            cout << i << " ";
        cout << endl;
    }
        

return 0;
}