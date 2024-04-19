#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //Constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    //Destructor
    // ~Node() {
    //     int value = this->data;
    //     //memory free
    //     if(this->next!=NULL) {
    //         delete next;
    //         this->next = NULL;
    //     }
    //     cout << "Memory is free for node with data: " << value << endl;
    // }
};

//Inserting at Head
void insertatHead(Node* &head, int d) {
    //New Node Create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

//Inserting at Tail
void insertatTail(Node* &tail, int d) {
    //New Node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

void insertatPosition(Node* &head, Node* &tail, int position, int d) {
    //For inserting at 1st position
    if(position == 1) {
        insertatHead(head, d);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < position-1) {
        temp = temp->next;
        count++;
    }

    //For inserting at last position(To update tail basically
    if(temp->next == NULL) {
        insertatTail(tail, d);
        return;
    }

    //creating a node for d
    Node* nodeToinsert = new Node(d);
    nodeToinsert->next = temp -> next;
    temp->next = nodeToinsert;
}

//Traversing a LinkedIn List
void print(Node* &head) {
    Node* temp = head;
    
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void deleteNode(int position, Node* &head) {
    //Deleting node at first position
    if(position == 1) {
        Node* temp = head;
        head = head->next;
        //Memory free(start node) by destructor
        temp -> next = NULL; //To avoid infinite loop
        delete temp;
    }

    //Deleting node at middle or last position
    else {
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;

        while(count < position) {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        delete curr;
    }

}
 
int main() {
    //created a new node
    Node* node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    Node* mid = node1;
    print(head);

    //Insert at head
    insertatTail(tail, 12);
    print(head);

    insertatTail(tail, 15);
    print(head);

    insertatTail(tail, 18);
    print(head);

    insertatPosition(head, tail, 5, 14);
    print(head);

    insertatTail(tail, 22);
    print(head);

    // print(node1);

    deleteNode(4, head);
    print(head);

    return 0;
}