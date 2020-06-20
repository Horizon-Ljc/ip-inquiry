#include <stdio.h>
int main()
{
	int t,n,i,j,m,h;
	scanf("%d",&t);
	while(t--){
	scanf("%d",&n);
		for(i=1;i<n;i++){
			printf("-");
		}
		printf("\n");
		for(i=1,m=n/2-1;i<n/2;i++,m--){
			printf("%*s",i-1,"");
			printf("\\"); 
			if(i==1)
			printf("%*s",2*m-1,"");
			else{
				for(h=1;h<=2*m-1;h++)
				printf("*");
			}
			
			printf("/");
			printf("\n");
		}//ÉÏ°ë±ß
		for(i=1,m=n/2-2;i<n/2;i++,m--){
			printf("%*s",m,"");
			printf("/");
			printf("%*s",i-1,"");
			printf("*");
			printf("%*s",i-1,"");
			printf("\\");
			printf("\n");
			
		} 
		for(i=1;i<n;i++)
		printf("-");
		printf("\n");
		printf("\n");
	}
	return 0;
}
