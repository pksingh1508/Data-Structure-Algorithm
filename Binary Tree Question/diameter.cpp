//----------------MOTIVATION IS TEMPORARY BUT DISCIPLINE IS PERMANENT--------------------
#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* left; 
        Node* right;
    
    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root) {

    cout << "Enter the data : " << endl;
    int data;
    cin >> data;

    root = new Node(data);
    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

// int height(Node* root) {
//     if(root == NULL) {
//         return 0;
//     }
//     int h1 = height(root->left);
//     int h2 = height(root->right);
//     int ans = max(h1, h2) + 1;
//     return ans;
// }

// int diameter(Node* root) {
//     // base case
//     if(root == NULL) {
//         return 0;
//     }
//     int op1 = diameter(root->left);
//     int op2 = diameter(root->right);
//     int op3 = height(root->left) + height(root->right) + 1;
//     int ans = max(op1, max(op2, op3));
//     return ans;
// }

pair<int, int> diameterFast(Node* root) {
    if(root == NULL) {
        pair<int, int> p = make_pair(0,0);
        return p;
    }
    pair<int, int> left = diameterFast(root->left);
    pair<int, int> right = diameterFast(root->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;
    pair<int, int> ans;
    ans.first = max(op1, max(op2, op3));
    ans.second = max(left.second, right.second) + 1;

    return ans;
}

int diameter(Node* root) {
    cout << "Height " << diameterFast(root).second << endl;
    return diameterFast(root).first;
}
int main(){

    Node* root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    // creating a tree
    root = buildTree(root);
    int n = diameter(root);
    cout << "diameter " << n << endl;

return 0;
}