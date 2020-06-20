#include<iostream>

using namespace std;

int a[2004][2004];

int main()
{
    int i,j;
    for(i=0;i<2004;i++)
        a[1][i]=1;
    for(i=2;i<=2004;i++)
    {
        for(j=i;j<=2004;j++)
        {
            a[i][j]=i*a[i][j-1]+a[i-1][j-1];
            a[i][j]=a[i][j]%10000;
        }
    }
    int n,m;
    
    scanf("%d",&m);
    while(m--)
    {
        int s=0;
        scanf("%d",&n);
        for(i=0;i<=n;i++)
        {
            s+=a[i][n];
            s=s%1000;
        }
      printf("%d\n",s);
    }
    return 0;
}