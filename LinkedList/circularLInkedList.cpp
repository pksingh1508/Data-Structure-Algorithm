#include<iostream>
#include<map>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    // constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    // destructor
    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};
void insertNode(Node* &tail,int element,int data) {
    // the list is empty
    if(tail == NULL) {
        Node* temp = new Node(data);
        tail = temp;
        temp->next = temp;
    }
    else {
        //non empty list
        Node* curr = tail;
        while(curr->data != element) {
            curr = curr->next;
        }
        //element found and curr is on the element
        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node* &tail,int element) {
    //empty list
    if(tail == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    else {
        // non empty
        Node* prev = tail;
        Node* curr = prev->next;
        while(curr->data != element) {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if(curr == prev) {
            tail = NULL;
        }
        else if(tail == curr) {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

bool detectLoop(Node* head) {
    if(head == NULL) {
        return false;
    }

    map<Node*, bool> visited;
    Node* temp = head;
    while(temp != NULL) {
        //cycle is present
        if(visited[temp] == true) {
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

Node* floydDetectLoop(Node* head) {

    if(head == NULL) {
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
        }
        slow = slow->next;

        if(slow == fast) {
            cout << "Meet at " << slow->data << endl;
            return slow;
        }
        
    }
    return NULL;
}

Node* getStartingNode(Node* head) {
    if(head == NULL) {
        return NULL;
    }

    Node* intermediate = floydDetectLoop(head);
    Node* slow = head;
    while(slow != intermediate) {
        slow = slow->next;
        intermediate = intermediate->next;
    }
    return slow;
}

void removeLoop(Node* head) {
    if(head == NULL) {
        return;
    }
    Node* startingNode = getStartingNode(head);
    Node* temp = startingNode;
    while(temp->next != startingNode) {
        temp = temp->next;
    }
    temp->next = NULL;
}

 
void print(Node* tail) {
    Node* temp = tail;
    if(tail == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

int main(){

    Node* tail = NULL;
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,7,9);
    print(tail);
    

    if(floydDetectLoop(tail)) {
        cout << "loop is present" << endl;
    }
    else {
        cout << "loop is not present" << endl;
    }

    Node* loop = getStartingNode(tail);
    cout << "loop start at " << loop->data << endl;
/*
  deleteNode(tail,3);
    print(tail);
    
    */

  

return 0;
}