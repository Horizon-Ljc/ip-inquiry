#include<bits/stdc++.h>
using namespace std;
int a,i,n1,n2,n3,x;
int zs(int x)
{
    for (i=2;i*i<=x;i++)
        if (x%i==0) break;
    if(i*i>x) return 1;
    else return 0;
}
int main()
{
    cin>>a;
    for (n1=2;n1<=a-4;n1++)//����ѭ����Ѱ�Һ��ʵ�����
        for (n2=2;n2<=a-4;n2++)//Ϊ�˽�ʡʱ�䣬ֻ��������ѭ����
        {
            n3=a-n1-n2;//��ǰ�������������������
            if (zs(n1)+zs(n2)+zs(n3)!=0)//�ж������Ƿ��Ϊ����������ֱ��������
                continue;
            cout<<n1<<' '<<n2<<' '<<n3;//���
            return 0;
             }
}
