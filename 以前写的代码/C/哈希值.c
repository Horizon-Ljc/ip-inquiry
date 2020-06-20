#include<stdio.h>
#include<string.h>
#include<math.h>
#define p 1000000007
#define s 1e-6
int main()
{
	char n[1001];
	int i,m;
	unsigned long long h;
	while(scanf("%s",n)!=EOF){
			getchar();
			h=pow(26,strlen(n));
			h%=p;
		for(i=strlen(n)-1,m=0;i>=0;i--,m++){
			h+=(n[i]-'a')*pow(26,m);
			h%=p;
		}
		printf("%llu\n",h);	
	}
	
 } 
