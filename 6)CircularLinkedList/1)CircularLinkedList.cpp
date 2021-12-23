#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void traverseCLL(Node *node)
{
    Node *start = node;
    
    while(node!=NULL)
    {
        cout<<node->data<<" ";
        node = node->next;
        if(node==start)
        {
            break;
        }
    }
}

int main()
{
    Node *head = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    head->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = head;

    traverseCLL(head);

    return 0;
}