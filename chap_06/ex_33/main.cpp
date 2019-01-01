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
            cout<<"背面";
        }
        else
        {
            ++x;
            cout<<"正面";
        }
        if(i%10==0)
            cout<<endl;
    }
    cout<<"正面次数为"<<x<<endl;
    cout<<"反面次数为"<<y<<endl;
}

int flip()
{
    return rand()%2;
}
