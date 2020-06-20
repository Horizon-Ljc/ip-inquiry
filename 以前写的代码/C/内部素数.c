#include<stdio.h>   //用前缀和做一下试试！ 
int s[1111111];
int p[111111];
int main()
{
	int i,j,t,a,b,sum;
	for(i=2;i*i<=1000000;i++)
	{
		if(!s[i])
		{
			for(j=i*i;j<=1000000;j+=i)
			{
				s[j]=1;
			}
		}
	}
	j=1;
	for(i=3;i<=1000000;i++)     //用前缀和做一下试试！
	{
		if(s[i]==0)
		{
			p[j]=i;
			j++;
		}
	}
	for(i=1;i<=j-2;i++)
	{
		s[(p[i]+p[i+1])/2]=1;
	}
	for(i=4;i<=1000000;i++)     //用前缀和做一下试试！
	{
		s[i]=s[i-1]+(p[i]==1);
	}
	scanf("%d",&t);				 //用前缀和做一下试试！
	while(t--)
	{
		sum=0;
		scanf("%d%d",&a,&b);
		printf("%d\n",s[b]-s[a-1]);
	}
	return 0;
}
