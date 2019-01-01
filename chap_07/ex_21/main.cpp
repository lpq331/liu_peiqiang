#include <iostream>

using namespace std;

void function(int [],int,int);
int main()
{
    const int arraysize=10;
    int a[arraySize]={1,2,3,4,5,6,7,8,9,10};

    function(a,0,arraySize);
    cout<<endl;
}

void function(int b[],int current,int size)
{
    if(current<size)
    {
        function(b,current+1,size);
        cout<<b[current]<<" ";
    }
}
