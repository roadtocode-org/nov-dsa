#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void traverseDoublyLinkedList(Node *node)
{
    while(node!=NULL)
    {
        cout<<node->data<<" ";
        node=node->next;
    }
}

void insertAtEnd(Node *node, int data)
{
    //create new node
    Node *newNode = new Node(data);

    //find last node of Doubly Linked List
    while(node->next!=NULL)
    {
        node=node->next;
    }

    //connect last node and new node
    node->next = newNode;
    newNode->prev = node;
}

int main(){

    Node *head = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);

    head->next = b;
    b->prev = head;

    b->next = c;
    c->prev = b;

    c->next = d;
    d->prev = c;

    cout<<"Before Insertion: "<<endl;
    traverseDoublyLinkedList(head);

    insertAtEnd(head, 25);
    insertAtEnd(head, 26);
    insertAtEnd(head, 27);
    insertAtEnd(head, 38);    

    cout<<"\nAfter Insertion: "<<endl;
    traverseDoublyLinkedList(head);


    return 0;
}