#include <iostream>

using namespace std;

int main()
{
    int a;
    int b=0;
    int c=0;
    int d=0;

    cout<<"����һ����λ��"<<endl;

    while(a>9999)
    {
        cin>>a;
        b=a/10;
        c=a/1000;
        d=a/10000;

    if(a%10==d)
    {
        if(b%10==c%10)
        cout<<"a�ǻ���"<<endl;
    }
    else
        cout<<"a���ǻ���"<<endl;
    }
}
