#include<stdio.h>
#include<math.h>
__int64 f[40],g[40];
__int64 fac()
{
   g[0]=1;
   for(int i=1;i<=40;i++) g[i]=2*g[i-1];
   f[1]=0;
   f[2]=1;
   for(int i=3;i<=40;i++) f[i]=(f[i-1]+f[i-2]+g[i-2]);
} 
int main()
{
    int n;
    fac();
    while(scanf("%d",&n)!=EOF&&n)
    printf("%I64d\n",g[n]-f[n]);
    return 0;
}
#include<stdio.h>
__int64 num[34][34];
int main()
{
    int n,m,i,j;
    for(i=1;i<34;i++)
    {
        num[i][0]=1;
        num[0][i]=1;
    } 
    while(scanf("%d %d",&n,&m)!=EOF&&m&&n)
    {
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++)
            num[i][j]=num[i-1][j]+num[i][j-1];
        }
        printf("%I64d\n",num[n][m]);
    }
    return 0;
} 
#include<stdio.h>
#define mod 1000000007
long long a[1001];
long long c[1001][1001];
int main()
{
    int i,j;
    a[2]=1;
    for(i=3;i<1001;i++) a[i]=(i-1)*(a[i-2]+a[i-1])%mod;
    for(i=1;i<1001;i++)
    {
        c[i][i]=1;
        c[i][1]=i;
        c[i][0]=1;
    }
    for(i=2;i<1001;i++)
    {
        for(j=1;j<i;j++) c[i][j]=(c[i-1][j-1] + c[i-1][j]) % mod;
    }
    int m,n;
    while(scanf("%d %d",&m,&n)==2&&m)
    {
        if(n==0) printf("1\n");
        else 
        printf("%d\n",a[n]*c[m][n]%mod);
    }
    return 0;
}
#include<stdio.h>
int prime(int x)
{
    if(x==1) return 0;
    int i;
    for(i=2;i*i<=x;i++)
    {
        if(x%i==0) break;
    }
    if(i*i>x) return 1;
    else return 0;
}
int main()
{
    int i,j;
    int a[84]={2,3,5,7};
    int b=4;
    int m;
    for(i=0;i<84;i++)
    {
        for(j=a[i]*10,m=j+10;j<m;j++)
        {
            if(prime(j)) a[b++]=j;
        }
    }
    for(i=0;i<83;i++) printf("%d %d\n",i+1,a[i]);
    return 0;
}
#include<stdio.h>
int main()
{
    long long  a[34][34];
    int i,j;
    for(i=1;i<34;i++)
    {
            a[i][i]=1;
            a[i][0]=1;
            a[i][1]=i;
    }
    for(i=1;i<34;i++)
    {
        for(j=1;j<i;j++)
        {
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }
    int k,n,m;
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d %d",&n,&m);
        int t=m+n;
        if(t%2==1) printf("0\n");
        else
        {
            printf("%d\n",a[n][t/2]);
        }
    }
    return 0;
} 
#include<stdio.h>
__int64 a[9000000];
int t[9000000]; //不看t的值，t用来标记，记录独特数占了哪些位 也就是用了哪个数 
int main()
{
    int i,j;
    int num=1;
    for(i= 1;i<10;i++)
    {
        a[num] = i;
        t[num] =t[num]|(1<<i);
        num++;
    }
    for(i=1;i<num;i++)
    {
        for(j=0;j<10;j++)
        { 
            if((1<<j) & ~t[i]) //结果为1之前没用过 0之前用过 
            {
                a[num]=a[i]*10+j;
                t[num]=t[i]|(1<<j);
                num++;
            }
        }
    }
    while(scanf("%d",&i)!=EOF)
        printf("%I64d\n",a[i-1]);
}
#include<stdio.h>
#define N 1712
int main()
{
    __int64 m,n,a[N];
    m=1;
    int i=0,k;
    while(i<N)
    {
        n=(m+1)/2;
        m=n*2+m;
        for(;i<N&&n>0;n/=2)
        {
            a[i++]=m-n;
        }
    
    }
    __int64 x,y;
    int l;
    scanf("%d",&l);
    while(l--)
    {
        scanf("%I64d %I64d",&x,&y);
        int count=0;
        for(i=0;i<N;i++)
        {
            if(a[i]>=x&&a[i]<=y) count++;
            else if (a[i]>y) break;
        }
        printf("%d\n",count);
    }
    return 0;
}


