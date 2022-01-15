#include<iostream>
using namespace std;

void fun(int n)
{
    if(n<=5)
        fun(n+1);
        
    cout<<n<<" ";    
}

int main()
{
    fun(1);
    return 0;
}