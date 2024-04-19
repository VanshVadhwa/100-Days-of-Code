#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // parameterized constructor
    Node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    // destructor
    ~Node() {
        int val = this->data;
        if(next!=NULL) {
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with data: " << val << endl;
    }
};

void insertatHead(Node* &tail, Node* &head, int d) {
    if (head == NULL) {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else {
        Node *temp = new Node(d);
        head->prev = temp;
        temp->next = head;
        // temp -> prev = NULL;
        head = temp;
    }
}

void insertatTail(Node* &tail, Node* &head, int d)
{
    if (tail == NULL) {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

    void insertatPosition(Node* &head, Node* &tail, int position, int d) {
        if (position == 1) {
            insertatHead(tail, head, d);
            return;
        }

        Node *temp = head;
        int count = 1;
        while (count < position - 1) {
            temp = temp->next;
            count++;
        }

        if (temp == NULL) {
            insertatTail(tail, head, d);
            return;
        }

        Node *toinsert = new Node(d);
        toinsert->next = temp->next;
        if (temp->next != NULL) {
        temp->next->prev = toinsert;
    }
        temp->next = toinsert;
        toinsert->prev = temp;

        if (toinsert->next == NULL) {
            tail = toinsert;
        }
    }

    void deleteNode(int position, Node* &head) {
        if(position == 1) {
            Node* temp = head;
            temp->next->prev=NULL;
            head = head -> next; //head = temp->next
            // head->next->prev=NULL;
            temp->next=NULL;
            delete temp;
        }
        else {
            Node* curr = head;
            Node* prev = NULL;
            int count = 1;

            while(count < position) {
                prev=curr;
                curr = curr->next;
                count++;
            }

            if(curr->next==NULL) {
                prev -> next = NULL;
                curr -> prev = NULL;
                delete curr;
            }

            curr->prev=NULL;
            prev->next=curr->next;
            curr->next->prev=prev; //Added by myself
            curr->next = NULL;
            delete curr;
        }
    }

    // traversing a linked list
    void print(Node * head)
    {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Length of Linked List
    int getLength(Node * head) {
        Node *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            // cout << temp->data;
            temp = temp->next;
            count++;
        }
        return count;
    }

int main() {
        // Node *node1 = new Node(10);
        Node *head = NULL;
        Node *tail = NULL;

        // print(head);

        insertatHead(tail, head, 12);
        print(head);

        insertatTail(tail, head, 14);
        print(head);

        insertatPosition(head, tail, 2, 11);
        print(head);

        insertatPosition(head, tail, 4, 15);
        print(head);


        // deleteNode(3, head);
        // print(head);

        cout << "Length of Linked List: " << getLength(head) ;

        return 0;
    }