#include <stdio.h>
unsigned long long c[66][66];
int main()
{
	int n,i,j;
	for(i = 0; i <= 64; i++){
		c[i][0] = c[i][i] = 1;
	}
	for(i = 2; i <= 64; i++)
		for(j = 1; j < i; j++)
			c[i][j] = c[i - 1][j] + c[i - 1][j - 1];

	while(scanf("%d", &n) != EOF){
		unsigned long long ans = 0;
		if(n==1)
		printf("1\n");
		else{
		if(n%2==1){
			for(i =n-1; i >=(n-1)/2; i--)
			ans += c[n - 1][i];
			printf("%I64d\n", ans);
		}else{
			for(i =n-1; i >(n-1)/2; i--)
			ans += c[n - 1][i];
			printf("%I64d\n", ans);
		}
			
		} 

	}
	return 0;
}//3 7 9
