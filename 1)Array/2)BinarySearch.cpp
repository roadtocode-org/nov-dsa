#include<iostream>
using namespace std;

int main(){

    int arr[8] = {17, 25, 34, 37, 52, 63, 78, 84};

    int key = 34;

    int start = 0;
    int end = 7;

    while(start<=end)
    {
        int mid = (start+end)/2;

        if(arr[mid]==key)
        {
            cout<<"Elelement is found at: "<<mid;
            break;
        }
        else if(key>arr[mid])
        {
            start = mid+1;
        }
        else
        {
            end =  mid - 1;
        }
    }

    return 0;
}