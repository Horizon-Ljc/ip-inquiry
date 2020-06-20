# include<stdio.h>
long long int re[35][35];
int main(){
	int n,m,i,j;
	while(~scanf("%d%d",&n,&m)&&n&&m){
		for( i=1;i<=n;i++) re[i][0]=1;
		for( i=1;i<=m;i++) re[0][i]=1;
		for(i=1;i<=n;i++)
		 for( j=1;j<=m;j++)
		   re[i][j]=re[i-1][j]+re[i][j-1];	
     printf("%I64d\n",re[n][m]);
 
	}
	return 0;
}

