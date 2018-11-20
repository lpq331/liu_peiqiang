#include<iostream>
using namespace std;

int main()
{
    double a,b,c;

    while(a*b*c>0)
    {
        cout<<"输入a,b,c"<<endl;
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
        cout<<"c=";
        cin>>c;

        if(a<=b,b<=c)
        {

        if(a*a+b*b==c*c)
        cout<<"可以组成直角三角形"<<endl;
        else if(a*a+c*c==b*b)
        cout<<"可以组成直角三角形"<<endl;
        else if(b*b+c*c==a*a)
        cout<<"可以组成直角三角形"<<endl;
        else
            cout<<"不行"<<endl;
        }
       else
       {

         if(a*a+b*b==c*c)
        cout<<"可以组成直角三角形"<<endl;
        else if(a*a+c*c==b*b)
        cout<<"可以组成直角三角形"<<endl;
        else if(b*b+c*c==a*a)
        cout<<"可以组成直角三角形"<<endl;
         else
            cout<<"不行"<<endl;

       }



    }

}
