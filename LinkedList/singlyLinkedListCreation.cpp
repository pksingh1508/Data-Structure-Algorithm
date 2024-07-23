#include<iostream>
#include<map>
using namespace std;

    class Node {
        public:
        int data;
        Node *next;

        // constructor of node
        Node(int data) {
            this->data = data;
            this->next = NULL;
        }

        // destructor for node
        ~Node() {
            int value = this->data;
            // memory free
            if(this->next != NULL) {
                delete next;
                this->next = NULL;
            }
            cout << "memory is free for node with data " << value << endl;
        }
    };

    void insertAtHead(Node* &head, int d) {

        // new node create
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
    }

    void insertAtTail(Node* &tail, int data) {

        // new node create
        Node* temp = new Node(data);
        tail->next = temp;
        tail = tail->next;

    }

    void insertAtPosition(Node* &tail,Node* &head,int position, int d) {

        // insert at starting position
        if(position == 1) {
            insertAtHead(head,d);
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
            insertAtTail(tail,d);
            return;                        
        }

        // creating a new node for d
        Node* nodeToInsert = new Node(d);
        nodeToInsert->next = temp->next;
        temp->next = nodeToInsert;
    }

    void deleteNode(Node* &tail,Node* &head, int position) {
        // deleting the first node
        if(position == 1) {
            Node* temp = head;
            head = head->next;
            // memory free start node
            temp->next = NULL;
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
            prev->next = curr->next;
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

    void print(Node* &head) {
        Node* temp = head;

        while(temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

int main(){
    // creating a new node
    Node* node1 = new Node(1);

    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtTail(tail,2);
    print(head);

    insertAtTail(tail,3);
    print(head);

    insertAtTail(tail,4);
    print(head);

    // insertAtTail(tail,5);
    // print(head);

    // cout << "Head " << head->data << endl;
    // cout << "tail " << tail->data << endl;

    deleteNode(tail,head,2);
    print(head);

    // cout << "Head " << head->data << endl;
    // cout << "tail " << tail->data << endl;

    // if(detectLoop(tail)) {
    //     cout << "loop is present";
    // }
    // else {
    //     cout << "loop is not present";
    // }

return 0;
}