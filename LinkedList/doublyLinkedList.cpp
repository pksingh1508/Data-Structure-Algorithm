#include<iostream>
using namespace std;

class Node {
    public:
    Node* prev;
    int data;
    Node* next;

    // constructor
    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << "memory free for node with data " << value << endl;
    }
};

// insertion at the beginning of the linked list
void insertBeginning(Node* &head,Node* &tail,int data) {
    if(head == NULL) {
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else {
        Node* temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// insertion at the end of the linked list
void insertEnd(Node* &head,Node* &tail,int d) {
    if(tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else {
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// insert at any position
void insertPosition(Node* &tail,Node* &head, int position, int d) {
    // insert at starting position
        if(position == 1) {
            insertBeginning(head,tail,d);
            return;
        }
        Node* temp = head;
        int cnt = 1;
        while(cnt < position - 1) {
            temp = temp->next;
            cnt++;
        }

        //insert at last position
        if(temp->next == NULL) {
            insertEnd(head,tail,d);
            return;                        
        }

        // creating a new node for d
        Node* insertNode = new Node(d);
        insertNode->next = temp->next;
        temp->next->prev = insertNode;
        temp->next = insertNode;
        insertNode->prev = temp;
}


void deleteNode(Node* &tail,Node* &head, int position) {
        // deleting the first node
        if(position == 1) {
            Node* temp = head;
            temp->next->prev = NULL;
            head = temp->next;
            temp->next = NULL;
            // memory free
            delete temp;
        }
        else {

            // deleting any middle node or last node
            Node* prev = NULL;
            Node* curr = head;
            int cnt = 1;
            while(cnt < position) {
                prev = curr;
                curr = curr->next;
                cnt++;
            }
            if(curr->next == NULL) {
                tail = prev;
            }
            curr->prev = NULL;
            prev->next = curr->next;
            curr->next = NULL;

            delete curr;
        }
    }

//traverse a linked list
void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// finding the length of the liked list
int getLen(Node* head) {
    int len = 0;
    Node* temp = head;

    while(temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

int main(){

    
    Node* head = NULL;
    Node* tail = NULL;

    // insertBeginning(head,2);
    // print(head);
    // insertBeginning(head,3);
    // print(head);
    // insertBeginning(head,4);
    // print(head);
    // insertBeginning(head,5);
    // print(head);

    insertEnd(head,tail,2);
    print(head);
    insertEnd(head,tail,3);
    print(head);
    insertEnd(head,tail,4);
    print(head);
    insertEnd(head,tail,5);
    print(head);

    //cout << "The length of the linked list is " << getLen(head) << endl;
    insertPosition(tail,head,1,100);
    print(head);

    deleteNode(tail,head,5);
    print(head);

    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl;

return 0;
}