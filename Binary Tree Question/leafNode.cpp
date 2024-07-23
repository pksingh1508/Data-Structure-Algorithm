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

void leafNode(Node* root) {
    if(root == NULL) {
        return;
    }

    if(root->left == NULL && root->right == NULL) {
        cout << root->data << " ";
    }
    if(root->left)
        leafNode(root->left);
    if(root->right)
        leafNode(root->right);
}

int main(){
    Node* root = NULL;
    root = buildTree(root);
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 -1
    levelOrderTraversal(root);

    
    leafNode(root);

return 0;
}