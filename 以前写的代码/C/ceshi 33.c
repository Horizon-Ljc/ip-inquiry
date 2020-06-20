#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--){
		char str[1001],s;
		gets(str);
		scanf("%c",&s);
		getchar();
		int i,j=strlen(str);
		for(i=0;i<j;i++){
			if(str[i]!=s){
				putchar(str[i]);
			}else {
				if(i!=0){
					printf("\n");
				}else{
					
				}
			}
		}
	}
}

