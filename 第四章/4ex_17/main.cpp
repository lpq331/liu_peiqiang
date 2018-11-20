#include <iostream>

using namespace std;

int main()
{
    int counter=0;
    int number=0;
    int largest=0;

    cout<<"输入10个数"<<endl;

    while(counter<10)
    {
        cin>>number;

        if(number>largest)
            largest=number;

        counter++;
    }
    cout<<"最大值"<<largest;
}
