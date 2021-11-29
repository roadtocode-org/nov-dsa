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

void findMid(Node *ptr)
{
    Node *temp = ptr;
    int count=0;
    while(ptr!=NULL)
    {
        count++;
        ptr = ptr->next;
    }    
    
    int n = count/2;
    while(n--)
    {
        temp=temp->next;
    }
    cout<<"Mid Element: "<<temp->data<<endl;
}

int main()
{
    Node *head = new Node(2);   
    Node *node2 = new Node(4);   
    Node *node3 = new Node(12);
    Node *node4 = new Node(68);
    Node *node5 = new Node(7);
  
    head->next = node2;
    node2->next =node3;
    node3->next =node4;
    node4->next =node5;
    
    findMid(head);

    return 0;
}