#include "stdio.h"
#define mod 1000003
 
int N[1002];
int main(){
	int n,m;
	int i; 
	while(~scanf("%d%d",&n,&m)&&n&&m){
		if(m==2&&n!=1){
			if(n%2==0) printf("2\n");
			else printf("0\n");
		}
		else{
			N[1]=m;N[2]=m*(m-1)%mod;N[3]=m*(m-1)*(m-2)%mod;
			if(n>3){
				for( i=4;i<=n;i++){
					N[i]=(N[i-1]*(m-2)%mod+N[i-2]*(m-1)%mod)%mod;
				}
 
			}
			printf("%d\n",N[n]);
 
			}
	}
return 0;
}


