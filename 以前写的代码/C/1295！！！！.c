#include<stdio.h>
int main()
{
	int n,i,isprime,j;
	long m;
	scanf("%d",&n);
	while(n--){
		scanf("%ld",&m);
		i=1;
		isprime=1;
		if(m<10){
			if(m==4){
			isprime=0;
				goto out;	
			}
			
			for(j=2;j<m;j++){
				if(m%j==0){
					isprime=0;
					goto out;
				}
			}
		}
		while(m/i>=10){
			i*=10;	
		}
		while(m>9){
			m%=i;
			if(m<i&&m>=(i/10)){
			}
			else{
				isprime=0;
				goto out;
			}
			i/=10;
			if(m==1){
					isprime=0;
					goto out;
				} 
			for(j=2;j*j<m;j++){//本地变量？在语句外还能？如果j为i 则i的量在for外可存在 
				if(m%j==0){    //不能判断m=9 
					isprime=0;
					goto out;
				}
			}
		}
		
		out:
		if(isprime)
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}
