#include <iostream>

using namespace std;

int main()
{
   double a,b;
   while(a!=-1)
   {
       cin>>a;
       cout<<"输入工时(-1 to end):"<<a<<"小时"<<endl;
       cin>>b;
       cout<<"输入报酬($00.00)"<<b<<"元/小时"<<endl;
       if(a<40)
       {
           cout<<"Salary is $"<<a*b<<endl;
       }
       else
       {
           cout<<"Salary is $"<<1.5*b*(a-40)+40*b<<endl;
       }

   }
}
