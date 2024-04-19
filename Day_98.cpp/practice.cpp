#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Parameterized Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertatHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertatTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    // temp->next=NULL;
    tail = tail->next; // tail = tail->next
}

void insertatMiddle(Node* &head, Node* &tail, int position, int d)
{
    if (position == 1)
    {
        insertatHead(head, d);
        return;
    }

    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertatTail(tail, d);
        return;
    }

    Node *nodetoInsert = new Node(d);
    nodetoInsert->next = temp->next;
    temp->next = nodetoInsert;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);

    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    Node *head = node1;
    Node *tail = node1;

    print(head);

    insertatHead(head, 12);
    print(head);

    insertatTail(tail, 15);
    print(head);

    insertatMiddle(head, tail, 2, 33);
    print(head);

    return 0;
}