#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int a=0,b=0,c=0,j;
		char p[1001];
		scanf("%s",&p);
		for(j=0;j<1000;j++)
		{
			if(p[j]==88)
			a++;
			if(p[j]==84)
			b++;
			if(p[j]==85)
			c++;
		}

		printf("%d\n",a);

	}
	return 0;
}
