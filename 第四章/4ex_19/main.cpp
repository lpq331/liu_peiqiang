#include <iostream>

using namespace std;

int main()

{
    int a,b;
    int number1=0;
    int number2=0;

    cout<<"请输入10个整数"<<endl;
    cin>>b;

    number1=b;
    number2=b;
    a=1;

    while(a<10)
    {
        cin>>b;

        if(b>number1)
          {
            number2=number1;
            number1=b;
          }
        else if(b>number2)
            number2=b;
        a++;
    }
    cout<<"最大值="<<number1<<endl;
    cout<<"次大值="<<number2<<endl;
}
