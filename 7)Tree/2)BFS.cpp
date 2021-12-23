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

void bfs(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout<<temp->data<<" ";

        if(temp->left!=NULL)
            q.push(temp->left);

        if(temp->right!=NULL)
            q.push(temp->right);
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

    bfs(root);

    return 0;   
}