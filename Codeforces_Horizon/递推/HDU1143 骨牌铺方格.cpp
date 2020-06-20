#include<iostream>

using namespace std;
  
int main()
{
	int n;
	
	long long a[32]={0};
	a[0] = 1;
	a[2] = 3;
	for(int i = 4;i<=31;i++)
		a[i] =4*a[i-2]-a[i-4];

	while(scanf("%d",&n)!=EOF&&n!=0)
		printf("%lld\n",a[n]);

	return 0;
} 