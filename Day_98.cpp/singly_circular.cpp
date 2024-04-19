#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //parameterized Constructor
    Node(int d) {
        this -> data = d;
        this -> next = NULL; 
    }

    //destructor
    ~Node() {
        int val = this->data;
        if(this->next!=NULL) {
            delete next;
            next = NULL;
        }
        cout << "Memory free for dat data: " << val << endl; 
    }
};

//insertnode
void insertnode(Node* &tail, int element, int d) {
    //case 1 - empty list
    if(tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }

    //case 2 - only 1 node (suppose element inside node is 3, so we will say ki 3 ke aage node lagado)
    else {
        //assuming that the element is present inside the list the list is non empty
        Node* curr = tail;

        while(curr->data != element) {
            curr = curr->next;
        }

        //element found and the current is present on it
        Node* temp = new Node(d);
        temp -> next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node* &tail, int element) {
    //empty lits
    if(tail == NULL) {
        cout << "List is empty" << endl;
    }
}

void print(Node* &tail) {
    Node* temp = tail;
    do {
        cout << tail->data << " ";
        tail = tail->next;
    } while(tail!= temp);
    cout << endl;
}

    //This whole does not print if there is single node so we are gonna use do while loop as it runs a condition irrespective of being true or false at least once
    // while(tail->next != temp) {
    //     cout << tail->data << " ";
    //     tail = tail->next;
    // }
    // cout << endl;


int main() {
    Node* tail = NULL;

    //empty list me insert kar rhe hain(5 doesnn't matter here)
    insertnode(tail, 5, 3);
    print(tail);

    insertnode(tail, 3, 4);
    print(tail);

    insertnode(tail, 4, 5);
    print(tail);

    insertnode(tail, 3, 6);
    print(tail);

} 