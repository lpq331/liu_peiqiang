#include<iostream>
using namespace std;

int main()
{
    double a,b,c;

    cout<<"依次输入a,b,c"<<endl;

    while(a*b*c>0)
    {
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
        cout<<"c=";
        cin>>c;

         if(a+b>c,b+c>a,a+c>b)
        cout<<"可以组成三角形"<<endl;
    else
        cout<<"不可以组成三角形"<<endl;
    }

}
