#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

void dfs(Node *root)
{
    stack<Node *> s;
    s.push(root);

    while(!s.empty())
    {
        Node *temp = s.top();
        s.pop();

        cout<<temp->data<<" ";

        if(temp->right!=NULL)
            s.push(temp->right);
        
        if(temp->left!=NULL)
            s.push(temp->left);
    }
}

int main()
{
    Node *root=new Node(17);
    Node *b = new Node(8);
    Node *c = new Node(5);
    Node *d = new Node(7);
    Node *e = new Node(2);
    Node *f = new Node(4);

    root->left=b;
    root->right=c;

    b->left=d;
    b->right=e;

    c->left=f;

    dfs(root);

    return 0;   
}