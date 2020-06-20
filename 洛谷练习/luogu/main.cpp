#include<iostream>
#include<cstring>
#include<stdlib.h>
#include<algorithm>

using namespace std;

char a[7];//输出
long long n;//int ?  pow只能用int吗
char s[15];//输入
int s1[15];//标记
int l;
int flag;//找到的标志

void dfs(int h)
{
    if(flag==1) return ;
    if(h==5)
    {
        long long sum=(a[0]-'A'+1)-(a[1]-'A'+1)*(a[1]-'A'+1)+(a[2]-'A'+1)*(a[2]-'A'+1)*(a[2]-'A'+1)-(a[3]-'A'+1)*(a[3]-'A'+1)*(a[3]-'A'+1)*(a[3]-'A'+1)+(a[4]-'A'+1)*(a[4]-'A'+1)*(a[4]-'A'+1)*(a[4]-'A'+1)*(a[4]-'A'+1);
        if(sum==n)
        {
            for(int i=0;i<5;i++) cout <<a[i];
            cout <<endl;
            flag=1;
            return ;
        }
        return ;
    }
    for(int i=0;i<l;i++){
        if(s1[i]==0&&!flag)
        {
            a[h]=s[i];
            s1[i]=1;
            dfs(h+1);
            s1[i]=0;

        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);


    while(cin >>n>>s)
    {
        if(n==0&&!strcmp(s,"END")) return 0;
        l=strlen(s);
        sort(s,s+l,greater<int>());

        dfs(0);
        if(!flag){
            cout <<"no solution"<<endl;
        }
        memset(s,0,sizeof(s));
        memset(s1,0,sizeof(s1));
        memset(a,0,sizeof(a));
        flag=0;
    }
    return 0;
}
