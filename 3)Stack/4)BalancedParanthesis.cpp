#include<iostream>
#include<stack>
using namespace std;

bool checkBalancedParanthesis(string str)
{
    stack<char> s;
    int len = str.length();
    
    for(int i=0; i<len; i++)
    {
        char currSymbol = str[i];
        if(currSymbol=='(' || currSymbol=='{' || currSymbol=='[')
        {
            s.push(currSymbol);
            continue;
        }

        if(s.empty())
        {
            return false;
        }

        char topElement = s.top();
        s.pop();

        switch(currSymbol)
        {
            case ')':
            if(topElement=='[' || topElement=='{')
            {
                return false;
            }
            break;

            case '}':
            if(topElement=='(' || topElement=='[')
            {
                return false;
            }
            break;

            case ']':
            if(topElement=='(' || topElement=='{')
            {
                return false;
            }
            break;
        } 
        
    }

    if(s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string expr = "{()[]}";
    //string expr = "{(][]}";

    if(checkBalancedParanthesis(expr))
    {
        cout<<"Balanced";
    }
    else
    {
        cout<<"Not Balanced";
    }



    return 0;
}