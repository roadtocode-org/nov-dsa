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

void traverseForward(Node *node)
{
    while(node!=NULL)
    {
        cout<<node->data<<"=>";
        node=node->next;
    }
}

void traverseBackward(Node *node)
{
    while(node!=NULL)
    {
        cout<<node->data<<"=>";
        node=node->prev;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);

    head->next = b;
    b->prev = head;

    b->next = c;
    c->prev = b;
    
    cout<<"Traversing forward"<<endl;
    traverseForward(head);

    cout<<"\nTraversing backward"<<endl;
    traverseBackward(c);

    return 0;
}