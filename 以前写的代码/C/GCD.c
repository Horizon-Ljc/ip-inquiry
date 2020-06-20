#include<stdio.h>
int main()
{
	int i,k,a,b,n,m,h,n2,m2,n3,m3;
	scanf("%d",&k);
	while(k--){
		scanf("%d %d",&a,&b);
		m=b/2;
		n=b/3;
		m2=(a-1)/2;
		n2=(a-1)/3;
		
		m3=b/6;
		n3=(a-1)/6;
		h=b-a+1-m-n+m2+n2+m3-n3;
		printf("%d\n",h);
	}
	return 0;
}
