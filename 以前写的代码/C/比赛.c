#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n;
        int k = 1;
        scanf("%d",&n);
        int m = 0;
        int ans = 0;
        while(n > 2)
        {
            while(k <= n)
                k = k << 1;
            k = k >> 2;
            m += k;
            n -= k;
            ans ++;
        }
        if(n == 2)
        {
            ans++;
            m++;
        }
        printf("%d %d",ans,m);
    }
    return 0;
}

