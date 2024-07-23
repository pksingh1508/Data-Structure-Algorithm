//----------------MOTIVATION IS TEMPORARY BUT DISCIPLINE IS PERMANENT--------------------
#include<iostream>
#include<queue>
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

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) {
            // purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) {
                // queue still has some child
                q.push(NULL);
            }
        }
        else {
            cout << temp->data << " ";
            if(temp->left) {
                q.push(temp->left);
            }
            if(temp->right) {
                q.push(temp->right);
            }
        }
    }
}

void inorder(Node* root) {
    // base case
    if(root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preOrder(Node* root) {
    // base case
    if(root == NULL) {
        return;
    } 

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* root) {
    // base case
    if(root == NULL) {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main(){

    Node* root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    // creating a tree
    root = buildTree(root);

    // level order traversing
    levelOrderTraversal(root);

    cout << "Inorder Traversal are: " << endl;
    inorder(root);
    cout << endl;
    cout << "Preorder Traversal are : " << endl;
    preOrder(root);
    cout << endl;
    cout << "Postorder Traversal are : " << endl;
    postOrder(root);

return 0;
}