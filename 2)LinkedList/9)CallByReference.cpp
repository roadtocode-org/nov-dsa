#include<iostream>
using namespace std;
void increseValue(int &num)
{
    num++;
    cout<<"Inside function increseValue()"<<num<<endl;
}
int main()
{
    int num = 10;
    cout<<"Before function call: "<<num<<endl;
    increseValue(num);
    cout<<"After function call: "<<num<<endl;

    return 0;
}