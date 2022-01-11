#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void postOrder(Node *root)
{
     if(root==NULL)
        return;

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";   
}

int main()
{
    Node *a = new Node(5);
    Node *b = new Node(7);
    Node *c = new Node(11);
    Node *d = new Node(12);
    Node *e = new Node(17);
    Node *f = new Node(8);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;

    postOrder(a);

    return 0;
}