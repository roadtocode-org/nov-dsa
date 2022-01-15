#include<iostream>
using namespace std;

void fun(int n)
{
    cout<<n<<" ";
    
    if(n<10)
        fun(n+1);
}

int main()
{
    fun(1);
    return 0;
}