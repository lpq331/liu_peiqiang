#include <iostream>

using namespace std;

double smallest(double,double,double);

int main()
{
    double x,y,z;

    cout<<"Enter three number:"<<endl;
    cin>>x>>y>>z;
    cout<<"the smallest value is "<<smallest(x,y,z)<<endl;
}

double smallest(double a,double b,double c)
{
    if(a<b,a<c)
        return a;
    else if(b<a,b<c)
        return b;
    else
        return c;
}
