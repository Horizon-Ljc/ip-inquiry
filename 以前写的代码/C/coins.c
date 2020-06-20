#include<cstring>
#include<stdio.h>
#include<algorithm>
using namespace std;
 
int main()
{
    int f_dp[42],b_dp[41];
    int n,i;
    f_dp[1]=1;
    b_dp[1]=1;
    for( i=2;i<=40;i++)
    {
        f_dp[i]=b_dp[i-1];
        b_dp[i]=b_dp[i-1]+f_dp[i-1];
    }
    while(scanf("%d",&n),n)
    {
        printf("%d\n",f_dp[n]+b_dp[n]);
    }
    return 0;
}


