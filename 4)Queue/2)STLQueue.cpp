#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<"Queue Size: "<<q.size()<<endl;
    cout<<"Front Element: "<<q.front()<<endl;
    cout<<"Rear Element: "<<q.back()<<endl;

    q.pop();
    cout<<"Front Element: "<<q.front()<<endl;
    cout<<"Is Empty: "<<q.empty()<<endl;
    
    return 0;
}