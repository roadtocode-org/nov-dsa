#include<iostream>
using namespace std;

class ATM
{
    public:
    ATM(int num)
    {
        cout<<"Constructor Called"<<num<<endl;
    }
    void withdraw()
    {
        cout<<"Withdraw Cash";
    }
};

int main()
{
    ATM obj1(10);
    ATM obj2(20);

    return 0;
}