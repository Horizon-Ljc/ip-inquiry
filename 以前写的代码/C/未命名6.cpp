#include<stdio.h>
#include<string.h> 
void LEFT(int m[4][4]);
void RIGHT(int m[4][4]);
void DOWN(int m[4][4]);
void UP(int m[4][4]);
int main()
{
    int T,i,j;
    scanf("%d",&T);
    while(T--)
    {
        int m[4][4] = {0};
        char n[6] = {0};
        for( i = 0; i < 4; i++)
            for( j = 0; j < 4; j++)
                scanf("%d",&m[i][j]);
        scanf("%s",n);
        if(strcmp(n,"LEFT") == 0)//左滑
            LEFT(m);
        else if(strcmp(n,"RIGHT") == 0)//右滑
            RIGHT(m);
        else if(strcmp(n,"DOWN") == 0)//下滑
            DOWN(m);
        else if(strcmp(n,"UP") == 0)//上滑
            UP(m);
    }
    return 0;
}
void LEFT(int m[4][4])
{
	int i,j;
    int x,y;//合并的值,位置
    for(i = 0; i < 4; i++)
    {
        x = 0, y = 0;
        for( j = 0; j < 4; j++)
        {
            if(m[i][j] != 0 && x == 0)
            {
                x = m[i][j];
                m[i][j] = 0;
                m[i][y] = x;
            }
            else if(m[i][j] != 0 && x != 0)
            {
                if(m[i][j] == x)
                {
                    m[i][j] = 0;
                    m[i][y] = 2*x;
                    y++;
                    x = 0;
                }
                else
                {
                    y++;
                    x = m[i][j];
                    m[i][j] = 0;
                    m[i][y] = x;
                }
            }
        }
    }
    for(i = 0; i < 4; i++)
    {
        for( j = 0; j < 3; j++)
            printf("%d ",m[i][j]);
        printf("%d\n",m[i][3]);
    }
 	printf("\n");
}
void RIGHT(int m[4][4])
{
	int i,j;
    int x,y;//合并的值,位置
    for( i = 0; i < 4; i++)
    {
        x = 0, y = 3;
        for( j = 3; j >= 0; j--)
        {
            if(m[i][j] != 0 && x == 0)
            {
                x = m[i][j];
                m[i][j] = 0;
                m[i][y] = x;
            }
            else if(m[i][j] != 0 && x != 0)
            {
                if(m[i][j] == x)
                {
                    m[i][j] = 0;
                    m[i][y] = 2*x;
                    y--;
                    x = 0;
                }
                else
                {
                    y--;
                    x = m[i][j];
                    m[i][j] = 0;
                    m[i][y] = x;
                }
            }
        }
    }
    for( i = 0; i < 4; i++)
    {
        for( j = 0; j < 3; j++)
            printf("%d ",m[i][j]);
        printf("%d\n",m[i][3]);
    }
 	printf("\n");

}
void UP(int m[4][4])
{
	int i,j;
    int x,y;//合并的值,位置
    for( j = 0; j < 4; j++)
    {
        x = 0, y = 0;
        for( i = 0; i < 4; i++)
        {
            if(m[i][j] != 0 && x == 0)
            {
                x = m[i][j];
                m[i][j] = 0;
                m[y][j] = x;
            }
            else if(m[i][j] != 0 && x != 0)
            {
                if(m[i][j] == x)
                {
                    m[i][j] = 0;
                    m[y][j] = 2*x;
                    y++;
                    x = 0;
                }
                else
                {
                    y++;
                    x = m[i][j];
                    m[i][j] = 0;
                    m[y][j] = x;
                }
            }
        }
    }
    for( i = 0; i < 4; i++)
    {
        for( j = 0; j < 3; j++)
            printf("%d ",m[i][j]);
        printf("%d\n",m[i][3]);
    }
     	printf("\n");

}
void DOWN(int m[4][4])
{
	int i,j;
    int x,y;//合并的值,位置
    for( j = 0; j < 4; j++)
    {
        x = 0, y = 3;
        for( i = 3; i >= 0; i--)
        {
            if(m[i][j] != 0 && x == 0)
            {
                x = m[i][j];
                m[i][j] = 0;
                m[y][j] = x;
            }
            else if(m[i][j] != 0 && x != 0)
            {
                if(m[i][j] == x)
                {
                    m[i][j] = 0;
                    m[y][j] = 2*x;
                    y--;
                    x = 0;
                }
                else
                {
                    y--;
                    x = m[i][j];
                    m[i][j] = 0;
                    m[y][j] = x;
                }
            }
        }
    }
    for( i = 0; i < 4; i++)
    {
        for( j = 0; j < 3; j++)
            printf("%d ",m[i][j]);
        printf("%d\n",m[i][3]);
    }
  	printf("\n");
  
}


