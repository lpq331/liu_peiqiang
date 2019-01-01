#include <iostream>
#include<iomanip>

using namespace std;
int redigits(int);

int main()
{
    int number;

    cout<<"Enter a number(between 1 and 9999)"<<endl;
    cin>>number;

    cout<<"½á¹ûÊÇ"<<redigits(number)<<endl;
}

int redigits(int x)
{
    int a=0;

    while(x>0)
    {
        a*=10;
        a+=x%10;
        x/=10;
    }
    return a;
}
