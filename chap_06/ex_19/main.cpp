#include <iostream>
#include<cmath>
#include<iomanip>

using namespace std;

double hypotenuse(double,double);

int main()
{
    double side1,side2;

    cout<<fixed;

    for(int i=0;i<3;i++)
    {
        cout<<"Enter 2 side of right triangle"<<endl;
        cin>>side1>>side2;

        cout<<"Hypotenuse:"<<setprecision(1)<<hypotenuse(side1,side2)<<endl;
    }
}

double hypotenuse(double side1,double side2)
{
    double z=0;
    z=sqrt(side1*side1+side2*side2);
    return z;
}
