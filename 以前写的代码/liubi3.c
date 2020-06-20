#include <stdio.h>
int n,a[31][31];
int dfs(int,int);
int main() {
	scanf("%d",&n);
	int i,j;
	for (i=1;i<=n;i++) {
		for (j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	}
	for (i=1;i<=n;i++)
	{
		if (a[i][1]!=1) 
		dfs(i,1);
		if (a[i][n]!=1) 
		dfs(i,n);
	}
	for (i=1;i<=n;i++)
	{
		if (a[1][i]!=1)
		dfs(1,i);
		if (a[n][i]!=1) 
		dfs(n,i);
	}
	for (i=1;i<=n; i++) {
		for (j=1;j<=n;j++) {
			if (a[i][j]==-1) {
				printf("0 ");
			}
			else if (a[i][j]==1) {
				printf("1 ");
			}
			else {
				printf("2 ");
			}
		}
		printf("\n");
	}
	return 0;
}
int dfs(int x,int y) {
	if (x<1||y<1||x>n||y>n||a[x][y]!= 0)
	return;
	a[x][y]=-1;
	dfs(x+1,y);
	dfs(x-1,y);
	dfs(x,y+1);
	dfs(x,y-1);
}//ø¥ ”∆µ 
