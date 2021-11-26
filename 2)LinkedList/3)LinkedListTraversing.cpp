#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void traverseLinkedList(Node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}

int main()
{
    Node *head = new Node(2);
    //head->data = 2;

    Node *node2 = new Node(4);
    //node2->data = 4;

    Node *node3 = new Node(6);
    //node3->data = 6;

    head->next = node2;
    node2->next =node3;

    traverseLinkedList(head);

    return 0;
}