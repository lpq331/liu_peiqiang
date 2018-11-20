#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;
    int d=0;

    cout<<"Enter a number:";
    cin>>a;

    while(a!=0)
    {
        c=a%10;
        a/=10;
        b+=c*pow(2,d++);
    }

    cout<<"number:"<<b<<endl;
}
