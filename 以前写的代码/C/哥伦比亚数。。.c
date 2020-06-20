#include<stdio.h>
int main()
{
	int n,k,i,j,s,a,b,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&k);
		for(j=k/2;j<=k;j++)
		{
			if(k>100)
			j=k-90;//把if句放在for循环外 
			s=0;
			b=j;
			c=j;
			a=0;
			while(c)
			{
				a=c%10;
				s=s+a;
				c/=10;
			}
			if(s+b==k)
			{
				printf("No\n");
				break;
			}
			if(b==k)
			printf("Yes\n");
		}
	}
	return 0;
} 
//哥伦比亚 
