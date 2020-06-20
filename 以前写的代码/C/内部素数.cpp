#include<bits/stdc++.h>
using namespace std;
inline int read() {
    char c=getchar();int x=0,f=1;
    while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
    while(c>='0'&&c<='9'){x=x*10+c-'0',c=getchar();}
    return x*f;
}
int q[2000005];
bool qq[2000005];
int sum[2000005];//1000000 
int k,n,m,sum1,sum2,kep,x,y,len1,len2,bas1,bas2;
void init(){
    int flag=1;
    int cnt=1;
    for(int i=3;i<=1001000;++i){//筛
        flag=1;
        for(int j=2;j<=sqrt(i);++j){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag)q[cnt++]=i;
    }
    for(int i=1;i<=cnt-2;++i){
        //cout<<q[i]+q[i+1]<<endl;
        qq[(q[i]+q[i+1])/2]=true;
    }
    for(int i=1;i<=1001000;++i){//前缀和处理
        sum[i]=sum[i-1]+(qq[i]==1);
    }
}
int main()
{
    k=read();//read()是输入挂 相当于scanf
    init();
    while(k--){
        n=read();
        m=read();
        printf("%d\n",sum[m]-sum[n-1]);
    }
    
    return 0;
}

