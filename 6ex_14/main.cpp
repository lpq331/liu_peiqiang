#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    double x;
    int a=0;

    cout<<"����һ����"<<endl;

    while(a=1)
    {
        cin>>x;
        cout<<"ԭʼ����"<<x;

        cout<<"���뵽����������ֵ"<<floor(x+0.5)<<endl;
        cout<<"���뵽���ʮ��λ���ֵ"<<floor(x*10+0.5)/10<<endl;
        cout<<"���뵽����ٷ�λ���ֵ"<<floor(x*100+0.5)/100<<endl;
        cout<<"���뵽���ǧ��λ���ֵ"<<floor(x*1000+0.5)/1000<<endl;
    }


}
