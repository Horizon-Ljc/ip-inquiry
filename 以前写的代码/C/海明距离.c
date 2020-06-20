#include<stdio.h>
int main()
{
    int n,i,a,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&a,&b);
		a^=b;
		b=0;
		while(a)
		{
			if(a&1)
				b++;
			a>>=1;
		}
		printf("%d\n",b);
	}
    return 0;    
}
