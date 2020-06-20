#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a,x;
    int n,i,j,y;
    int d=0;
    char s[21],f[21];
    scanf("%d",&n);
    for (x=0;x<n;x++)
    {
        d++;

        scanf("%d ",a);
        gets(s);
        getchar();
        for (i=0;i<a-1;i++)
        {
            gets(f);
            y = strlen(s);
            for (j=0;j<y;j++)
            {
                if (s[j]!=f[j])
                {
                    s[j] = 0;
                }
            }
        }
        printf("Case %d: ",d);
        for (i=0;s[i]==0;i++)
        {
            printf("%c",s[i]);
        }

    }

    return 0;
}
