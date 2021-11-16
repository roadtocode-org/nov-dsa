#include <iostream>
using namespace std;

int main()
{

    int arr[8] = {17, 25, 34, 37, 52, 63, 78, 84};

    int key = 34;

    int start = 0;
    int end = 7;

    int flag=-1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            flag=mid;
            break;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if(flag==-1)
    {
        cout<<"Key not found";
    }
    else
    {
        cout<<"Key found at index "<<flag;
    }

    return 0;
}