#include <iostream>

using namespace std;
void square(int);

int main()
{
    int side;

    cout<<"Enter side"<<endl;
    cin>>side;

    square(side);
    cout<<endl;
}

void square(int side)
{
    for(int i=0;i<side;i++)
    {
        for(int a=0;a<side;a++)
            cout<<'*';

        cout<<'\n';
    }
}
