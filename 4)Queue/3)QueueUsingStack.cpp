#include<iostream>
#include<stack>
using namespace std;

class Queue
{
    public:
    stack<int> s1;
    stack<int> s2;

    void enqueue(int x)
    {
         while(s1.empty()==false)
         {
            s2.push(s1.top());
            s1.pop();
         }

        s1.push(x);

        while(s2.empty()==false)
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int dequeue()
    {
        if(s1.empty())
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else
        {
            int x=s1.top();
            s1.pop();
            return x;
        }
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;

    return 0;
}