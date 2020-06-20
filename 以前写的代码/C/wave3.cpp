#include <stdio.h>
unsigned long long a[49][49];

int main()
{
	int t,i,j,h;
	scanf("%d",&t);
	for( i = 0; i <= 21; i++)
		a[i][21 - i] = a[i][21 + i] = 1;
	for(i = 1; i <= 21; i++)
		for( j = 22 - i; j <= 20 + i; j++)
			a[i][j] = a[i-1][j-1] + a[i-1][j] + a[i-1][j+1];
	for( i = 22; i <= 42; i++)
		for( j = i - 21; j <= 63 - i; j++)
			a[i][j] = a[i-1][j-1] + a[i-1][j] + a[i-1][j+1];

	while(t--){
		scanf("%d",&h);
		printf("%I64d\n", a[h][21]);
	}
	return 0;
}
