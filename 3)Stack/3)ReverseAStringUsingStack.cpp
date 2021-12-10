#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<char> s;

    string student_name;
    cout<<"Enter the name of the student: ";
    cin>>student_name;

    for(int i=0; i<student_name.size();i++)
    {
        s.push(student_name[i]);
    }

     while(s.empty()==false)
     {
            cout<<s.top();
            s.pop();
     }

    return 0;
}