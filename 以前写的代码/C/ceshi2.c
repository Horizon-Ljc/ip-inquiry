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
			if(m==1||m==4||m==9){
					isprime=0;
					goto out;
				} 
			for(j=2;j*j<m;j++){ 
				if(m%j==0){    
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
