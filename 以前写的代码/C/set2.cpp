#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n;
        int m = 0,sum = 1,j = 0;
        int c[10] = {0};
        scanf("%d",&n);
        scanf("%d",&m);
        c[0] = m;
        for(int i = 1; i < n; i++)
        {
            scanf("%d",&m);
            if(sum <= 4)
            {
                for(j = 0; j < sum; j++)
                {
                    if(m == c[j])
                        break;
                }
                if(j >= sum)
                {
                    c[sum] = m;
                    sum++;
                }
            }
        }
        if(sum <= 3)
            printf("Yes\n");
        else if(sum == 4)
        {
            if((c[0]+c[1] == c[2]+c[3]) || (c[0]+c[2] == c[1]+c[3]) || (c[0]+c[3]==c[1]+c[2]))
                printf("Yes\n");
            else
                printf("No\n");
        }
        else
            printf("No\n");
    }
    return 0;
}


