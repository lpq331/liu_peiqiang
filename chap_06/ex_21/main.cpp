#include <iostream>

using namespace std;
bool even(int);

int main()
{
    int x;

    for(int i=0;i<3;i++)
    {
        cout<<"Enter an integer"<<endl;
        cin>>x;

        if(even(x))
            cout<<x<<"��ż��"<<endl;
        else
            cout<<x<<"����ż��"<<endl;
    }
}

bool even(int a)
{
    return!(a%2);
}
