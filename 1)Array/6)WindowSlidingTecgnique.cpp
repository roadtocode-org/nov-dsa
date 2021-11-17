#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {6, 8, 2, 1, 9, 2, 4, 3, 5, 7};
    int findSum = 15;

    for(int i=1; i<=8; i++)
    {
        int currentWindowSum = arr[i-1] + arr[i] + arr[i+1];
        if(findSum == currentWindowSum)
        {
            cout<<"Window: ["<<i-1<<"], ["<<i<<"], ["<<i+1<<"]"<<endl;
        }
    }
    return 0;
}