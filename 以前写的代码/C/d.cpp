#include<stdio.h>
int main()
{
	int i,j,k,t,f,x;
	scanf("%d",&k);
	while(k--){
		scanf("%d",&x);
		f=0;
		for(i=2;i*i<x;i++){
			if(x%i==0){
				t=x/i;
				f=1;
				for(j=2;j*j<=t;j++){
					if(t%j==0){
						f=0;
						break;
					}
				}
				break;
			}
		}
		if(f)
		printf("Yes\n");
		else
		printf("No\n");
	}
}
