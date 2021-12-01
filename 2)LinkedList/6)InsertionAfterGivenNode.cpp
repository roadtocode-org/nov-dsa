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

void insertAfterGivenNode(Node *node, int data)
{
    Node *newNode = new Node(data);
    newNode->next = node->next;
    node->next = newNode;
}

void traverseLinkedList(Node *node)
{
    while(node != NULL)
    {
        cout<<node->data<<" ";
        node = node->next;
    }
}

int main()
{

    Node *head = new Node(2);
    Node *node2 = new Node(3);
    Node *node3 = new Node(10);
    Node *node4 = new Node(15);
    Node *node5 = new Node(20);

    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    cout<<"Before Insertion: ";
    traverseLinkedList(head);

    insertAfterGivenNode(node3, 26);

    cout<<"\n After Insertion: ";
    traverseLinkedList(head);

    return 0;
}