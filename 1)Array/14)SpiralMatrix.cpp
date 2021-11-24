#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
   
   int R1=0, R2=3, C1=0, C2=3;

   while(R1<R2 && C1<C2)
   {
       //top row
       for(int i=C1; i<=C2; i++)
       {
           cout<<arr[R1][i]<<" ";
       }
       R1++;

       //right column
        for(int i=R1; i<=R2; i++)
        {
            cout<<arr[i][C2]<<" ";
        }
        C2--;

        //bottom row
        for(int i=C2; i>=C1; i--)
        {
            cout<<arr[R2][i]<<" ";
        }
        R2--;

        //left column
        for(int i=R2; i>=R1; i--)
        {
            cout<<arr[i][C1]<<" ";
        }
        C1++;
   }

     
    return 0;
}