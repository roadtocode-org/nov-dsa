#include<iostream>
using namespace std;
int main()
{
    int arr[10] = { 17, 82, 30, 26, 50, 60, 10, 3, 5, 100 };

    int smallest = arr[0];
    for(int i = 1; i < 10; i++)
    {
        if(arr[i]<smallest)
        {
            smallest = arr[i];
        }
    }
    
    int num = arr[0];
    for(int i=0; i<10; i++)
    {
        if(arr[i]<num && arr[i]>smallest) 
        {
            num = arr[i];
        }
    }

    cout<<"Second smallest element is: "<<num;

    return 0;
}