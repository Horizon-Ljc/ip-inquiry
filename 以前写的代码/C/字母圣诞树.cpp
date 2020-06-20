#include<stdio.h>
int main()
{
	int n,p,k;
	char i,m;
	scanf("%d",&n);
	while(n--){
		getchar();
		scanf("%c",&i);
		i-='A';
		k=i+1;
		for(m=65;m<=k+64;m++){
			printf("%*s",k,"");
			printf("%c\n",m);
			i--;
			printf("%*s",i+1,"");
			for(p=0;p<2*(m-64)+1;p++)	
			printf("%c",m);	
			printf("\n");
		} 
	}
} 
