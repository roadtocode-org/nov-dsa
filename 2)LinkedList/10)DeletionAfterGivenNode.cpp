#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void traverseLinkedList(Node *node)
{
    while(node!=NULL)
    {
        cout<<node->data<<" ";
        node=node->next;
    }
}

void deletionAfterGivenNode(Node *node)
{
    Node *temp = node->next;
    node->next =  temp->next;

    delete temp;
}
 

int main()
{

    Node *head=new Node(1);
    Node *second=new Node(5);
    Node *third=new Node(7);
    Node *fourth=new Node(9);
    Node *fifth=new Node(11);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;

    cout<<"Before Deletion: ";
    traverseLinkedList(head);

    deletionAfterGivenNode(third);

    cout<<"\nAfter Deletion: ";
    traverseLinkedList(head);
 

    return 0;
}