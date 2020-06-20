#include<stdio.h>
#include<string.h>
int main()
{	
	int i,K,a,b,h,n,t;
	char word[200];
	scanf("%d",&K);
	while(K--){
		scanf("%s",word);
		getchar();
		scanf("%d %d",&a,&b);
		h=a-1;
		n=h+b-1; 
		for(;h<n;h++,n--){
		t=word[h];
		word[h]=word[n];
		word[n]=t;
		}
	
		for(i=0;i<strlen(word);i++)
		printf("%c",word[i]);
		printf("\n");
	}
} 
