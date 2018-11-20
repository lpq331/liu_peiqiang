#include <iostream>

using namespace std;

int main()
{
    int a;
    int b=0;

    while(b==0)
    {
        cout<<"enter result:";
        cin>>a;

        if(a==2)
        {
            cout<<"passes"<<endl;
            b=1;
        }
        else if(a==1)
        {
            cout<<"passes"<<endl;
            b=1;
        }
        else
        {
            cout<<"failures"<<endl;
            b=0;
        }
    }
}
