#include <iostream>

using namespace std;

bool multiple(int,int);

int main()
{
    int a,b;

    for (int i=0;i<3;i++)
    {
        cout<<"Enter two integers:"<<endl;
        cin>>a>>b;

        if(multiple(a,b))
            cout<<"是倍数"<<endl;
        else
            cout<<"不是倍数"<<endl;
    }
}

bool multiple(int a,int b)
{
    return !(b%a);
}
