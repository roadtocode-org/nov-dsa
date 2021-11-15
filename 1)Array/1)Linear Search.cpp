//Linear Search
#include<iostream>
using namespace std;
int main()
{
    int arr[8] = {8, 5, 1, 9, 13, 23, 17, 14};
    int key = 17;

    for (int i = 0; i < 8; i++)
    {
         if(arr[i]==key)
         {
            cout<<key<<" is found at index: "<<i<<endl;
            break;
         }
    }
    return 0;
}