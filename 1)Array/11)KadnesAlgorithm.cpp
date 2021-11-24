//Kadne's Algorithm
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[8] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxSum=0;
    int currentSum=0;
    for(int i=0; i<n; i++)
    {
        if(currentSum<0)
            currentSum=0;

       currentSum = currentSum + arr[i];

       if(currentSum>maxSum)
       {
           maxSum=currentSum;
       }
    }
    cout<<"Maximum sum is "<<maxSum<<endl;
    return 0;
}