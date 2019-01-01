#include <iostream>
#include<array>

using namespace std;

int main()
{
    int a[20],x;

    cout<<"ÊäÈë20¸öÊý"<<endl;

    for(int i=0;i<20;i++)
        cin>>a[i];

    for(int i=0;i<19;i++)
    {
        for(int j=0;j<19;j++)
        {
            if(a[j]<a[j+1])
            {
                x=a[j];
                a[j]=a[j+1];
                a[j+1]=x;
            }
        }
    }
    for(int i=0;i<20;i++)
    {
        if(a[i]!=a[i+1])
            cout<<a[i]<<" ";
    }
    cout<<endl;
}
