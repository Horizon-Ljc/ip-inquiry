#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N,K;
        int i,j;
        char s[5];
        int num[5][12] = {0};
        int ans[5][11] = {0};
        int x,y;
        char D[5][5] = {"Mon","Tue","Wen","Thur","Fri"};
        int a = 0;
        scanf("%d %d",&N,&K);
        for(i = 0; i < N; i++)//记录周一到周五课表
        {
            scanf("%s %d %d",s,&x,&y);
            if(strcmp(s,"Mon") == 0)
            {
                for(j = x; j <= y; j++)
                    num[0][j] = 1;
            }
            else if(strcmp(s,"Tue") == 0)
            {
                for( j = x; j <= y; j++)
                    num[1][j] = 1;
            }
            else if(strcmp(s,"Wen") == 0)
            {
                for(j = x; j <= y; j++)
                    num[2][j] = 1;
            }
            else if(strcmp(s,"Thur") == 0)
            {
                for( j = x; j <= y; j++)
                    num[3][j] = 1;
            }
            else if(strcmp(s,"Fri") == 0)
            {
                for(j = x; j <= y; j++)
                    num[4][j] = 1;
            }
        }
        for( i = 0; i < 5; i++)
        {
            int sum = 0,m = 0;
            for( j = 1; j < 5; j++)//上午1-4节课
            {
                if(num[i][j] == 0)//如果没课
                {
                    sum++;//空时间+1
                    if(sum >= K)
                    {
                        ans[i][m] = j-sum+1;//记录空时间开始时间
                        m++;//这一天适合考试的时间数+1
                        sum--;
                        a++;//总适合考试时间数+1
                    }
                }
                else
                {
                    sum = 0;
                }
            }
            sum = 0;
            for(j = 5; j < 9; j++)
            {
                if(num[i][j] == 0)
                {
                    sum++;
                    if(sum >= K)
                    {
                        ans[i][m] = j-sum+1;
                        m++;
                        sum--;
                        a++;
                    }
                }
                else
                {
                    sum = 0;
                }
            }
            sum = 0;
            for( j = 9; j <12; j++)
            {
                if(num[i][j] == 0)
                {
                    sum++;
                    if(sum >= K)
                    {
                        ans[i][m] = j-sum+1;
                        m++;
                        sum--;
                        a++;
                    }
                }
                else
                {
                    sum = 0;
                }
            }
        }
        printf("%d\n",a);
        for( i = 0; i < 5; i++)
        {
            for( j = 0; j < 11; j++)
            {
                if(ans[i][j] != 0)
                    printf("%s %d %d\n",D[i],ans[i][j],ans[i][j]+K-1);
            }
        }
    }
    return 0;
}


