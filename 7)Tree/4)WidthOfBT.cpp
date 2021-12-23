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

void width(Node *root)
{
  
    queue<Node*> q;
    q.push(root);
    int max = -1;

    while(!q.empty())
    {
        int k = q.size();

        if(k > max)
            max = k;

        for(int i=0; i<k; i++)
        {
            Node *temp = q.front();
            q.pop();
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }

    cout<<"Maximum width: "<<max<<endl;    
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

    width(root);

    return 0;   
}