#include<iostream>
#include<cstdio>
using namespace std;
int x,n,i,t,cnt;
int main()
{
    cin>>x>>n; 
    i=x;
    t=0;
    while(++t<=n)
    {
        if(i==8) i=1;
        if(i!=6 && i!=7) cnt++;
        i++;
    }
    cout<<cnt*250<<endl;
}
