#include<stdio.h>
#include<string.h>
int main()
{
	int i,K,a,b,h,n,t;
	char word[200];
	scanf("%d",&K);
	while(K--){
		scanf("%200s",word);
		getchar();
		scanf("%d %d",&a,&b);
		h=a-1;
		n=strlen(word)-h-1; 
		do{
			if(word[h]!=word[n]){
		t=word[h];
		word[h]=word[n];
		word[n]=t;
		h+=1;
		n-=1;	
		} 
		}while(h<=n);	
	}
	for(i=0;i<strlen(word);i++)
	printf("%d",word[i]);
	printf("\n");
} 
