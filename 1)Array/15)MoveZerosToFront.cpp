#include<iostream>
using namespace std;

int main()
{
    int arr[] = {5, 0, 7, 2, 6, 0, 3, 0, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int num=n-1;
    int  pos=n-1;

    while(num>=0)
    {
        if(arr[num]==0)
        {
            num--;
        }
        else
        {
            arr[pos]=arr[num];
            pos--;
            num--;
        }
    }
    while(pos>=0)
    {
        arr[pos]=0;
        pos--;
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0 ;
}