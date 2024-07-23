//----------------MOTIVATION IS TEMPORARY BUT DISCIPLINE IS PERMANENT--------------------
#include<iostream>
#include<vector>
#include<queue>
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

void zigZagTraversal(node* root) {
    vector<int> result;
    queue<node*> q;
    q.push(root);

    bool leftToRight = true;

    while(!q.empty()) {
        int n = q.size();
        vector<int> ans(n);
        
        for(int i=0; i<n; i++) {
            node* frontNode = q.front();
            q.pop();

            int index = leftToRight ? i : n-i-1;
            ans[index] = frontNode->data;

            if(frontNode->left)
                q.push(frontNode->left);
            if(frontNode->right)
                q.push(frontNode->right);
        }
        leftToRight = !leftToRight;
        for(auto i:ans) {
            result.push_back(i);
        }
    }
    for(auto a:result) {
        cout << a << " ";
    }
}

int main(){
    node* root = NULL;
    root = buildTree(root);
    zigZagTraversal(root);

return 0;
}