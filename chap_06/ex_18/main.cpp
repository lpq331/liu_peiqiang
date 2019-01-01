#include <iostream>

using namespace std;

int integerPower(int,int);
int main()
{
    int exp,base;

    cout<<"Enter base and exp:"<<endl;
    cin>>base>>exp;
    cout<<"integerPower("<<base<<","<<exp<<")is:"
    <<integerPower(base,exp)<<endl;
}

int integerPower(int a,int b)
{
    int c=1;

    for(int x=1;x<=b;x++)
        c=c*a;

    return c;
}
