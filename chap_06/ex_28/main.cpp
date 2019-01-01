#include <iostream>
using namespace std;

bool isPerfect(int);
void printSum(int);

int main()
{
   for(int i=2;i<=1000;i++)
   {
      if(isPerfect(i))
         printSum(i);
   }
   cout << endl;
}


bool isPerfect(int x)
{
   int factorSum=1;

   for(int i=2;i<=x/2;i++)
   {
      if(x%i==0)
         factorSum+=i;
   }
   return factorSum==x;
}


void printSum(int x)
{
   cout<<x<<"=1";

   for(int i=2;i<=x/2;i++)
   {
      if(x%i==0)
         cout<<"+"<<i;
   }

   cout << endl;
}
