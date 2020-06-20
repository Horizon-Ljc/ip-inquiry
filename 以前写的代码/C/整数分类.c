#include<stdio.h>
int main(){
	int n,d,h;
	while(scanf("%d",&n)){
		if(n==0)
		return 0;
		if((n/10)==0)
		printf("%d\n",n);
		else{
			out:
			do{
				d=n%10;
				n/=10;
				h+=d;
			}	while(n!=0);
			
			if((h/10)!=0){
				n=h;
				h=0;
				goto out;
			}
			printf("%d\n",h);
			h=0;
		}
	}
}
