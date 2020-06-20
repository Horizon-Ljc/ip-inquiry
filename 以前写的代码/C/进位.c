#include<stdio.h>
#include<math.h>
int main()
{
	long c,d;
	int n,a,b,y,i,m;
	scanf("%d",&n);
	while(n--){
	scanf("%d+%d=%ld",&a,&b,&c);
		m=0;
		if((a+b)==c){
			printf("0\n");
		
		}
		else{
		
		for(i=10;(c-b)>=a*i;i*=10){
			if((c-b)==a*i)
			m=1;
		}
		d=(c-b)/a;
		if(m){
			y=log10(d);
			printf("%d\n",y);
		}
		else{
			d=(c-a)/b;
			if(!(d%10))
				y=log10(d);
			printf("%d\n",-y);
	}
}
}
		return 0;
}

