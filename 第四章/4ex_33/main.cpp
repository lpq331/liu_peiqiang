#include<iostream>
using namespace std;

int main()
{
    double a,b,c;

    while(a*b*c>0)
    {
        cout<<"����a,b,c"<<endl;
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
        cout<<"c=";
        cin>>c;

        if(a<=b,b<=c)
        {

        if(a*a+b*b==c*c)
        cout<<"�������ֱ��������"<<endl;
        else if(a*a+c*c==b*b)
        cout<<"�������ֱ��������"<<endl;
        else if(b*b+c*c==a*a)
        cout<<"�������ֱ��������"<<endl;
        else
            cout<<"����"<<endl;
        }
       else
       {

         if(a*a+b*b==c*c)
        cout<<"�������ֱ��������"<<endl;
        else if(a*a+c*c==b*b)
        cout<<"�������ֱ��������"<<endl;
        else if(b*b+c*c==a*a)
        cout<<"�������ֱ��������"<<endl;
         else
            cout<<"����"<<endl;

       }



    }

}
