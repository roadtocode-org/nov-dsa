#include<iostream>
using namespace std;

int arr[100]={0};

int fact(int n)
{
     arr[0] = 1;
     arr[1] = 1;

     if(n==0)
     {
         return arr[0];
     }
     else if(n==1)
     {
         return arr[1];
     }
     else if(arr[n]!=0)
     {
         return arr[n];
     }

    for(int i=1; i<=n; i++)
    {
        arr[i] = i * arr[i-1];
    }

    return arr[n];
     
}

int main()
{
    cout<<"arr[5] = "<<arr[5]<<endl;

    cout<<fact(5);
    cout<<endl;
    
    cout<<"arr[5] = "<<arr[5]<<endl;
    return 0;
}