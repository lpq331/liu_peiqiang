#include <iostream>

using namespace std;

int main()
{
   double a,b;
   while(a!=-1)
   {
       cin>>a;
       cout<<"���빤ʱ(-1 to end):"<<a<<"Сʱ"<<endl;
       cin>>b;
       cout<<"���뱨��($00.00)"<<b<<"Ԫ/Сʱ"<<endl;
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
