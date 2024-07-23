//----------------MOTIVATION IS TEMPORARY BUT DISCIPLINE IS PERMANENT--------------------
#include<iostream>
#include<vector>
#include<queue>
#include<map>
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

//vertical order traversal
vector<int> verticalOrder(node* root, vector<int> &ans) {
    map<int, map<int, vector<int> > > nodes;
    queue<pair<node*, pair<int,int> > > q;
    if(root == NULL) {
        return ans;
    }
    q.push(make_pair(root, make_pair(0,0)));

    while(!q.empty()) {
        pair<node*, pair<int,int> > temp = q.front();
        q.pop();
        node* frontNode = temp.first;
        int hd = temp.second.first;
        int lvl = temp.second.second;

        nodes[hd][lvl].push_back(frontNode->data);
        if(frontNode->left) {
            q.push(make_pair(frontNode->left, make_pair(hd-1, lvl+1)));
        }
        if(frontNode->right) {
            q.push(make_pair(frontNode->right, make_pair(hd+1, lvl+1)));
        }
    } 
    for(auto i:nodes)
        for(auto j:i.second)
            for(auto k: j.second)
                ans.push_back(k);
    return ans;
}

int main(){
    node* root = NULL;
    root = buildTree(root);

    vector<int> ans; 
    verticalOrder(root, ans);
    for(auto m:ans) {
        cout << m << " ";
    }


return 0;
}