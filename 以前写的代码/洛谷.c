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
    for (n1=2;n1<=a-4;n1++)//进入循环，寻找合适的数。
        for (n2=2;n2<=a-4;n2++)//为了节省时间，只设置两层循环。
        {
            n3=a-n1-n2;//用前两个数求出第三个数。
            if (zs(n1)+zs(n2)+zs(n3)!=0)//判断三数是否均为质数，否则直接跳过。
                continue;
            cout<<n1<<' '<<n2<<' '<<n3;//输出
            return 0;
             }
}
