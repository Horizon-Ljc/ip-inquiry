#include<stdio.h>
#define max 1000000
int s[max];
int main()
{
	int n,a,b,k,i,j;
	scanf("%d",&n);
	for(i=2;i<=max;i++)
	s[i]=1;
	for(i=2;i<=max;i++)
	{
		if(s[i])
		for( j=2*i;j<=max;j+=i)
		s[j]=0;
	}
	while(n--)
	{
		k=0;
		scanf("%d%d",&a,&b);
		for(;a<=b;a++)
		{
			if(s[a])
			k++;
		}
		printf("%d\n",k);
	}   
    return 0;
}
