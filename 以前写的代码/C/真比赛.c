#include<stdio.h>
__int64 m[86];
void test()
{
	int i;
    m[0] = 1;
    m[1] = 2;
    for( i = 2; i < 86; i++)
    {
        m[i] = m[i-1] + m[i-2] + 1;
    }
}
int main()
{
    __int64 n;
    test();
    while(scanf("%I64d",&n) != EOF)
    {
        for(int i = 0; i < 86; i++)
        {
            if(n <= m[i])
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}


