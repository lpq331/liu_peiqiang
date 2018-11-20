#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    double x;
    int a=0;

    cout<<"输入一个数"<<endl;

    while(a=1)
    {
        cin>>x;
        cout<<"原始数据"<<x;

        cout<<"舍入到最近整数后的值"<<floor(x+0.5)<<endl;
        cout<<"舍入到最近十分位后的值"<<floor(x*10+0.5)/10<<endl;
        cout<<"舍入到最近百分位后的值"<<floor(x*100+0.5)/100<<endl;
        cout<<"舍入到最近千分位后的值"<<floor(x*1000+0.5)/1000<<endl;
    }


}
