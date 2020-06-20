#include<stdio.h>
int main()

{
    char a[11][11];
    char A[11][11];
    int k,x,y,t,i,j,b,c;
    char l;
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d%d",&x,&y);
        getchar();
        t=1;
        for(i=0;i<x;i++)
        {
           for(j=0;j<x;j++)
           {
              a[i][j]=t;
              A[i][j]=a[i][j];
              t++;
           }
        }
        while(y--)
        {
           scanf("%c%d%d",&l,&b,&c);
           if(l=='L')
           {
                for(i=0;i<x;i++)
                {
                    j=(i+c)%x;
                    a[b-1][i]=A[b-1][j];
                }
           }
           else if(l=='R')
            {
                for(i=x;i>=0;i--)
                {
                    j=(i-c)%x;
                    if(j<0)
                       j=x+j;
                    a[b-1][i]=A[b-1][j];
                }
            }
            else if(l=='D')
            {
                for(i=x-1;i>=0;i--)
                {
                     j=(i-c)%x;
                    if(j<0)
                       j=x+j;
                    a[i][b-1]=A[j][b-1];
                }
            }
            else if(l=='U')
            {
                for(i=0;i<x;i++)
                {
                    j=(i+c)%x;
                    a[i][b-1]=A[j][b-1];
                }
            }
        }
        for(i=0;i<x;i++)
        {
            for(j=0;j<x;j++)
            {
                if(i==x-1&&j==x-1)
                    printf("%d\n",a[i][j]);
                else
                    printf("%d ",a[i][j]);
            }

        }
    }
}//另一种的思路（太慢了） 
