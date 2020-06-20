#include<stdio.h>
#define N 30001
int m[N]={0};
int w[N]={0};
int main()
{
	int t,a,b,i,j,k,isprime;
	
	for(i=2;i<174;i++){
		isprime=1;
		if(i!=2||i!=3){
			for(k=2;k<i;k++){
				if(i%k==0){
					isprime=0;
					break;
				}
			}
		}
		if(isprime){
				for(j=2;i*j<=30001;j++){
			if(i=j){
				continue;
			}
			m[i*j]=1;
		}
		}//两素数相乘 
		
	}//goto 使用的原则 
	for(i=1;i<N;i++){
		w[i]=m[i]+m[i-1];
	}
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&a,&b);
		printf("%d\n",w[b]-w[a]);
	}
	return 0;
 } 
