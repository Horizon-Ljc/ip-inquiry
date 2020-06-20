#include<stdio.h>
int main()
{
	int a[100][100]={0};
	int n,i,j;
	while(scanf("%d",&n)){
		if(n==0)
		return 0;
		for(i=0;i<n;i++)	
		scanf("%d",&a[0][i]);
		for(i=1;i<=n;i++){
			for(j=0;j<=n;j++){
				a[i][j]=a[i-1][j]+a[i-1][j+1];
				a[i][j]%=2013;
			}
		}
		printf("%d\n",a[n-1][0]%2013);
	}
	return 0;
}
