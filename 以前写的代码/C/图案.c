#include<stdio.h>
int main()
{
	char m='A';
	int pattern[100][100];//¿´ÌâÄ¿
	int n,i,j,h;
	scanf("%d",&n);
	for(i=0;i<2*n-1;i++){
		for(j=0;j<2*n-1;j++){
			pattern[i][j]=0;
		}
	} 
	for(i=n-1,j=n-1;i<=2*n-2;i++){

		pattern[i-(m-'A')][j-(m-'A')]=m;
		pattern[i][j]=m;
		m+=1;
	}
	for(i=0;i<2*n-1;i++){
		for(j=0;j<2*n-1;j++){
			printf("%d",pattern[i][j]);
		}
		printf("\n");
		
	} 
}
