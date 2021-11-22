#include<iostream>
using namespace std;

int main()
{
    int arr[] = {5, 0, 7, 2, 6, 0, 3, 0, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int num=0;
    int  pos=0;

    while(num<n)
    {
        if(arr[num]==0)
        {
            num++;
        }
        else
        {
            arr[pos]=arr[num];
            pos++;
            num++;
        }
    }
    while(pos<n)
    {
        arr[pos]=0;
        pos++;
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0 ;
}