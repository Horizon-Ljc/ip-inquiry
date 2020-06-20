#include<stdio.h>
#include<string.h>
#include<math.h>
#define p 1000000007//如何定义一个小量 1e-6 
int main()
{
	char n[1001];
	int i,m,j;
	unsigned long long h,s;
	while(scanf("%s",n)!=EOF){
			getchar();
			h=0;
		if(n[0]=='a'){
			h=1;
			for(i=1;i<=strlen(n);i++){
				h=(h*26)%p;
			} 	
		}else{
			h=1;
			for(i=1;i<=strlen(n);i++){
				h=(h*26)%p;
			} 
		}
		//pow(26,strlen(n)) 足够大时直接溢出
		s=1;
		for(i=strlen(n)-1;i>=0;i--){
			if(i!=strlen(n)-1){
				s=(26*s)%p;		
			}	
				
			h=(h+s*(n[i]-'a'))%p;
		}
		printf("%llu\n",h);	
	}
	return 0;
} //% 需要强制转换为int  
