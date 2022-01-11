#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *left,*right;
    Node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};

bool searchBST(Node *root, int key)
{
    if(root==NULL) 
    {
        cout<<"Key not found"<<endl;
        return false;
    }
    else if(root->data==key)
    {
        cout<<"Key found"<<endl;
        return true;
    }
    else if(root->data>key)
    {
        return searchBST(root->left,key);
    }
    else
    {
        return searchBST(root->right,key);
    }
    return false;
}

int main()
{
    Node *root=new Node(15);
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(25);   
    Node *d = new Node(8);
    Node *e = new Node(12);
    Node *f = new Node(16);

    root->left=a;
    root->right=b;
    b->right=c;
    a->left=d;
    a->right=e;
    b->left=f;

    cout<<searchBST(root,12);



    return 0;
}