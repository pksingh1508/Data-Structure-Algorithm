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

void findPreSuc(Node* root, Node*& pre, Node*& suc, int key) {
    // base case 
    if(root == NULL) {
        return;
    }

    if (root->data == key)
    {
        // the maximum value in left subtree is predecessor
        if (root->left != NULL)
        {
            Node* tmp = root->left;
            while (tmp->right)
                tmp = tmp->right;
            pre = tmp ;
        }
 
        // the minimum value in right subtree is successor
        if (root->right != NULL)
        {
            Node* tmp = root->right ;
            while (tmp->left)
                tmp = tmp->left ;
            suc = tmp ;
        }
        return ;
    }

    // If key is smaller than root's key, go to left subtree
    if (root->data > key)
    {
        suc = root ;
        findPreSuc(root->left, pre, suc, key) ;
    }
    else // go to right subtree
    {
        pre = root ;
        findPreSuc(root->right, pre, suc, key) ;
    }

}



Node* insertIntoBST(Node* root, int data) {
    // base case
    if(root == NULL) {
        root = new Node(data);
        return root;
    }
    if(data > root->data) {
        // right part me insert karna hai
        root->right = insertIntoBST(root->right, data);
    }
    else {
        // left part me insert karna hai
        root->left = insertIntoBST(root->left, data);
    }
    return root;
}

Node* minVal(Node* root) {
    Node* temp = root;
    while(temp->left != NULL) {
        temp = temp->left;
    }
    return temp;
}

Node* maxVal(Node* root) {
    Node* temp = root;
    while(temp->right != NULL) {
        temp = temp->right;
    }
    return temp;
}

Node* takeInput(Node* root) {
    int data;
    cin >> data;
    while(data != -1) {
        root = insertIntoBST(root, data);
        cin >> data;
    }
    return root;
}

Node* deleteFromBST(Node* root, int val) {
    // base case
    if(root == NULL) {
        return root;
    }
    if(root->data == val) {
        // 0 child
        if(root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }

        // 1 child --- left or right
        if(root->left != NULL && root->right == NULL) {
            Node* tmp = root->left;
            delete root;
            return tmp;
        }

        if(root->left == NULL && root->right != NULL) {
            Node* tmp = root->right;
            delete root;
            return tmp;
        }
        
        // 2 child
        if(root->left != NULL && root->right != NULL) {
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }

    }
    else if(root->data > val) {
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else {
        root->right = deleteFromBST(root->right, val);
        return root;
    }
}

int main(){
    Node* root = NULL;

    cout << "Enter data to create BST " << endl;
    root = takeInput(root);

    cout << "Printing the BST" << endl;
    levelOrderTraversal(root);

    cout << endl << "Inorder Traversal " << endl;
    inorder(root);


    // Code for deleting the data form the BST
    
    root = deleteFromBST(root, 70);

    cout << "Printing the BST" << endl;
    levelOrderTraversal(root);

    cout << endl << "Inorder Traversal " << endl;
    inorder(root);

return 0;
}