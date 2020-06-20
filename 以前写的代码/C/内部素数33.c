#include<stdio.h>
#define p 1000000001 
int a[p];
int main(){
	int n,i,j;
	for(i=2;i*i<p;i++){
		if(!a[i]){
			for(j=2*n;j<1000000004;j+=n){
				a[j]=1;
			}
		}
	}
	while(scanf("%d",&n),n){
		for(j=3;j<p;j++){
			if(a[j]==0){
				if(a[n-j]==0){
					printf("%d %d",j,n-j);
					break;
				}
			}
		}
	}
	return 0;
} 

