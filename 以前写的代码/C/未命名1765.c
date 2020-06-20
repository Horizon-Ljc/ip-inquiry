#include<stdio.h>
#include<math.h>
int main(){
	int count;
	int i,n,m,h,b;
	int a=0;
	while(scanf("%d",&n)){
		if(n==0)
		return 0;
		b=n;
		count=0;
		a=0;
		for(i=1;(n/i)>0;i*=10){
			count++;
	    }
			for(m=0;m<count;m++){
				h=n%10;
				n=n/10;
				a+=pow(h,count);
			}
			if(a==b)
			printf("Yse\n");
			else
			printf("No\n");	
	}
}
