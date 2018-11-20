#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    double hours1,charge1;
    double hours2,charge2;
    double hours3,charge3;
    double hours,charge;

    cout<<"输入三个停车时间"<<endl;
    cin>>hours1>>hours2>>hours3;
    cout<<"Car"<<"\tHours"<<"\tCharge"<<endl;

    if(hours1>3)
    {
        if(hours1<24)
            charge1=0.5*(hours1-3)+2;
        else
            charge1=10.00;
    }
    else
        charge1=2.00;
    cout<<1<<"\t"<<hours1<<"\t"<<charge1<<endl;

    if(hours2>3)
    {
        if(hours2<24)
            charge2=0.5*(hours2-3)+2;
        else
            charge2=10.00;
    }
    else
        charge2=2.00;
    cout<<2<<"\t"<<hours2<<"\t"<<charge2<<endl;

    if(hours3>3)
    {
        if(hours3<24)
            charge3=0.5*(hours3-3)+2;
        else
            charge3=10.00;
    }
    else
        charge3=2.00;
    cout<<3<<"\t"<<hours3<<"\t"<<charge3<<endl;

    hours=hours1+hours2+hours3;
    charge=charge1+charge2+charge3;
    cout<<"TOTAL"<<"\t"<<hours<<"\t"<<charge<<endl;
}
