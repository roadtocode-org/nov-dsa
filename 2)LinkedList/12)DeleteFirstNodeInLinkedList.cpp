#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void traverseLinkedList(Node *node)
{
    while(node != NULL)
    {
        cout<<node->data<<" ";
        node = node->next;
    }
}

void deleteFirstNode(Node * &head)
{
     Node *temp = head;
     head=head->next;
        delete temp;
}

int main()
{

    Node *head =new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);

    head->next = second;
    second->next = third;
    third->next = fourth;

    cout<<"Before Deletion: "<<endl;
    traverseLinkedList(head);

    deleteFirstNode(head);

    cout<<"\nAfter Deletion: "<<endl;
    traverseLinkedList(head);


    return 0;
}