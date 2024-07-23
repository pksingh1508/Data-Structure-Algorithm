//----------------MOTIVATION IS TEMPORARY BUT DISCIPLINE IS PERMANENT--------------------
#include<iostream>
#include<stack>
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

// Preorder traversal -> N L R
void preOrderTraversal(Node* root) {
    stack<Node*> s;
    s.push(root);
    while(!s.empty()) {
        Node* temp = s.top();
        s.pop();
        cout << temp->data << " ";
        if(temp->right)
            s.push(temp->right);
        if(temp->left)
            s.push(temp->left);
    }
}

// PostOrder traversal -> L R N
void postOrderTraversal(Node* root) {
    stack<Node*> s;
    while(true) {
        while(root) {
            s.push(root);
            s.push(root);
            root = root->left;
        }
        if(s.empty()) {
            return;
        }
        root = s.top();
        s.pop();
        if(!s.empty() && s.top() == root) {
            root = root->right;
        }
        else {
            cout << root->data << " ";
            root = NULL;
        }
    }
}

// Inorder traversal -> L N R
void inOrderTraversal(Node* root) {
    stack<Node*> s;
    Node* curr = root;
    while(curr != NULL || s.empty() == false) {
        while(curr != NULL) {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout << curr->data << " ";
        curr = curr->right;
    }
}

int main(){

    Node* root = NULL;
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1 
    // creating a tree
    root = buildTree(root);

    // traversal
    cout << "Preorder Traversal " << endl;
    preOrderTraversal(root);
    cout << endl;
    cout << "PostOrder Traversal " << endl;
    postOrderTraversal(root);
    cout << endl;
    cout << "Inorder Traversal " << endl;
    inOrderTraversal(root);
    cout << endl;

return 0;
}