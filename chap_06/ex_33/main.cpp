#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int flip();

int main()
{
    int x=0;
    int y=0;

    srand(time(0));

    for(int i=0;i<100;i++)
    {
        if(flip()==0)
        {
            ++y;
            cout<<"����";
        }
        else
        {
            ++x;
            cout<<"����";
        }
        if(i%10==0)
            cout<<endl;
    }
    cout<<"�������Ϊ"<<x<<endl;
    cout<<"�������Ϊ"<<y<<endl;
}

int flip()
{
    return rand()%2;
}
