#include <stdio.h>
#include <string.h>
int main()
{
	int n,i,m,k;
	char a[11], b[11];
	scanf("%d", &n);
	while(n--){
		scanf("%s %s", a, b);
		m=0;
		k=0;
		for(i= 0; i < strlen(a) + strlen(b); i++){
			if(i==0||i%2==0){
					printf("%c",a[m]);
					m++;
			}
			
			else{
					printf("%c",b[strlen(b)-1-k]);
				k++;
			} 
			
		}
		printf("\n");
	}//putcharµÄÊ¹ÓÃ 
	return 0;
}
