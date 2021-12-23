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

void detectLoop(Node *node)
{
    Node *fast = node;
    Node *slow = node;
    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow)
        {
            cout<<"Loop Detected"<<endl;
            return;
        }
    }
    cout<<"Loop Not Detected"<<endl;    
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
    e->next = c;

    detectLoop(head);

    return 0;
}