#include<bits/stdc++.h>
using namespace std;

int calLeftMax(int i, int arr[])
{
    int max=arr[i];
    for(int j=i; j>=0; j--)
    {
        if(arr[j]>max)
            max=arr[j];
    }
    return max;
}

int calRightMax(int i, int arr[])
{
    int max=arr[i];
     for(int j=i; j<5; j++)
     {
         if(arr[j]>max)
            max=arr[j];
     }
    return max;
}

int main()
{
    int arr[5] ={4, 1, 3, 2, 3};

    int totalWater = 0;

    for(int i=1; i<4; i++)
    {
        int leftMax=calLeftMax(i, arr);
        int rigthtMax=calRightMax(i, arr);

        int minHeight = min(leftMax, rigthtMax);

        int currentWater = minHeight - arr[i];

        totalWater  = totalWater + currentWater;
    }

    cout<<"Total Water: "<<totalWater<<endl;

    return 0;
}