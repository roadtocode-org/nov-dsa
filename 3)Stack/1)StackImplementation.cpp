#include<iostream>
using namespace std;
#define MAX 50

class Stack
{
    int arr[MAX];
    int top;
public:
    Stack()
    {
        top = -1;
    }

    void push(int val)
    {
        if(top==MAX-1)
        {
            cout<<"Stack overflow"<<endl;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }

    int pop()
    {
         if(top==-1)
         {
             cout<<"Stack underflow"<<endl;
             return -1;
         }
         else
         {
             int temp = arr[top];
             top--;
             return temp;
         }
    }

    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int size()
    {
        return top+1;
    }
};

int main()
{

    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"IsEmpty: "<<s.isEmpty()<<endl;
    cout<<"Size: "<<s.size()<<endl;
    cout<<"Popped Element: "<<s.pop()<<endl;
    cout<<"Popped Element: "<<s.pop()<<endl;
    cout<<"Popped Element: "<<s.pop()<<endl;
    cout<<"Popped Element: "<<s.pop()<<endl;

    return 0;
}