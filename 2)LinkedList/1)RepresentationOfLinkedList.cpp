#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

int main(){

    Node *node1 = new Node();
    node1->data = 5;

    Node *node2 = new Node();
    node2->data = 7;

    Node *node3 = new Node();
    node3->data = 9;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    Node *ptr = node1;

    while(ptr!=NULL){        
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }

    return 0;
}