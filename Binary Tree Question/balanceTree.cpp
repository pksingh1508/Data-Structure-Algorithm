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

pair<bool, int> isBalance(Node* root) {
    if(root == NULL) {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }

    pair<bool, int> left = isBalance(root->left);
    pair<bool, int> right = isBalance(root->right);

    bool leftAns = left.first;
    bool rightAns = right.first;
    bool cond = abs(left.second + right.second) <= 1;

    pair<bool, int> ans;

    ans.second = max(left.second , right.second) + 1;
    if(leftAns && rightAns && cond) {
        ans.first = true;
    }
    else {
        ans.first = false;
    }

    return ans;
}

int main(){

    Node* root = NULL;
    root = buildTree(root);

    bool t = isBalance(root).first;
    if(t){
        cout << "The tree is Balanced. " << endl;
    }
    else {
        cout << "The tree is not Balanced. " << endl;
    }

return 0;
}