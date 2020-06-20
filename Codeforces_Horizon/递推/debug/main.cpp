#include<iostream>
#include<cstdio>

using namespace std;

long long m[15];
long long c[26][26];

int main()
{
	for(int i=0;i<=3;i++){
		c[i][i]=1;
		c[i][0]=1;
	}
	for(int i=1;i<=3;i++){
		for(int j=1;j<i;j++){
			c[i][j]=c[i-1][j-1]+c[i-1][j];
		}
	}
	m[1]=0;
	m[0]=1;
	for(int i=3;i<=3;i++){
		m[i]=(i-1)*(m[i-1]+m[i-2]);
	}


	int n;
	while(~scanf("%d",&n)&&n!=0){
		long long ans=0;
		for(int i=0;i<=n/2;i++){
			ans+=c[n][i]*m[i];
		}
		printf("%lld\n",ans);
	}
	return 0;
}
