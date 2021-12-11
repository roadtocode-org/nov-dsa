#include<iostream>
using namespace std;
class Queue
{
public:
    int front, back, size, capacity;
    int queue[100];
    Queue()
    {
        front = -1;
        back = -1;
        size = 0;
        capacity = 100;
    }
    void enqueue(int val)
    {
        if(size==capacity)
        {
            cout<<"Queue is full"<<endl;
            return;
        }
        if(front==-1)
        {
            front=0;
            back=0;
            queue[0]=val;
        }
        else
        {
            back++;
            queue[back]=val;
        }
        size++;      
    }

    int dequeue()
    {
        if(size==0)
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int frontElement=queue[front];

        for(int i=front; i<back; i++)
        {
            queue[i]=queue[i+1];
        }
        back--;
        size--;

        return frontElement;
    }

    int getCapacity()
    {
        return capacity;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        if(size==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Queue q;
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);

    cout<<q.getSize()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.getSize()<<endl;
    cout<<q.isEmpty()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.isEmpty()<<endl;

    return 0;
}