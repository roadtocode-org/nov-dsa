#include<iostream>
#include<stack>
using namespace std;
int main(){

    stack<int> s;
    
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<"Top element is: "<<s.top()<<endl;
    s.pop();
    cout<<"Top element is: "<<s.top()<<endl;

    cout<<"Size of stack is: "<<s.size()<<endl;
    s.pop();
    s.pop();

    cout<<"Is stack empty? "<<s.empty()<<endl;

    return 0;
}