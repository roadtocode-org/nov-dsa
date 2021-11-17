#include<iostream>
using namespace std;
int main()
{
    int arr[10] = { 17, 82, 30, 26, 50, 60, 10, 3, 5, 100 };

    int a = arr[0];
    int b = arr[0];

    for(int i=0; i<10; i++)
    {
        if(arr[i]<a)
        {
            b=a;
            a=arr[i];
        }
        else if(arr[i]<b)
        {
            b=arr[i];
        }
    }

    cout<<"Smallest: "<<a<<endl;
    cout<<"Second Smallest: "<<b<<endl;
     
    
    
    return 0;
}