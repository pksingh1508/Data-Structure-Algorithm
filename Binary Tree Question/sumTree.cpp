//----------------MOTIVATION IS TEMPORARY BUT DISCIPLINE IS PERMANENT--------------------
#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;
    
    public:
        Node(int data) {
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* buildTree(Node* root) {
    int data;
    cout << "Enter the data " << endl;
    cin >> data;

    root = new Node(data);
    if(data == -1) {
        return NULL;
    }

    cout << "Enter the data for inserting in left of " << data << endl;
    buildTree(root->left);
    cout << "Enter the data for inserting in right of " << data << endl;
    buildTree(root->right);

    return root;
}

pair<bool, int> isSumTree(Node* root) {
    // base case
    if(root == NULL) {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }
    if(root->left == NULL && root->right == NULL) {
        pair<bool, int> p = make_pair(true, root->data);
        return p;
    }

    pair<bool, int> left = isSumTree(root->left);
    pair<bool, int> right = isSumTree(root->right);

    bool leftAns = left.first;
    bool rightAns = right.first;
    bool condition = root->data == left.second + right.second;   
    pair<bool, int> ans;
    if(leftAns && rightAns && condition) {
        ans.first = true;
        ans.second = 2 * root->data;
    }
    else {
        ans.first = false;
    }

    
    return ans;
}

int main(){

    Node* root = NULL;
    root = buildTree(root);

    bool ans = isSumTree(root).first;
    if(ans) {
        cout << "The tree is sum tree" << endl;
    }
    else {
        cout << "The tree is not sum tree" << endl;
    }


return 0;
}