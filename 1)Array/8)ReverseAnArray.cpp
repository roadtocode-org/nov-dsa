#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n= sizeof(arr)/sizeof(arr[0]);

    int start = 0;
    int end = n-1;

    for(int i=0; i<(n/2); i++)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;       
    }

    cout<<"Reversed Array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}