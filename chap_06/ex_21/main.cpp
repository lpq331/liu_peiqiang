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
            cout<<x<<"是偶数"<<endl;
        else
            cout<<x<<"不是偶数"<<endl;
    }
}

bool even(int a)
{
    return!(a%2);
}
