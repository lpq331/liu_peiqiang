#include <iostream>

using namespace std;

int main()
{
    double r;
    double p=3.14159;

    while(r>0)
    {
        cout<<"输入半径";
        cin>>r;

        cout<<"直径"<<2*r<<endl;
        cout<<"周长"<<2*r*p<<endl;
        cout<<"面积"<<p*r*r<<endl;
    }
}
