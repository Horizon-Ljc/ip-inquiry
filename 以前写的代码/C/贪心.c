#include<stdio.h>
int main()//贪心，贪每次移动都是从一端到另一端
{
    int n,i;
    while(scanf("%d",&n))
    {
        int sum = 0;
        int tran = 0;
        int m[1001] = {0};
        int fin[1001] = {0};
        for( i = 0; i < n; i++)
        {
            scanf("%d",&m[i]);
        }
        while(1)
        {
            for( i = 0; i < n; i++)
            {
                if(fin[i] == 0)
                {
                    if(sum >= m[i])
                    {
                        sum++;
                        fin[i] = 1;
                    }
                }
            }
            if(sum >= n)
                break;
            tran++;
            for( i = n-1; i >= 0;  i--)
            {
                if(fin[i] == 0)
                {
                    if(sum >= m[i])
                    {
                        sum++;
                        fin[i] = 1;
                    }
                }
            }
            if(sum >= n)
                break;
            tran++;
        }
        printf("%d\n",tran);
    }
    return 0;
}

