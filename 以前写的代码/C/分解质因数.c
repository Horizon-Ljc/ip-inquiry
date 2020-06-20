#include<stdio.h>
int mian()
{
	int N,n,i;
	int count;
	scanf("%d",&N);
	while(N--){
		scanf("%d",&n);
		printf("%d=",n);
		for(i=2;i<n;i++){
			count=0;
			if(n%i==0){
				count++;
				printf("%d",i);
				n/=i;
				while(n%i==0){
				count++;
				n/=i;
			}
			if(count>1)
			printf("^%d",count);
			if(count==1&&n!=1)
			printf("*");
			
			printf("\n");
			break;
			}
			}
		
			
		}
			if(i==n) 
			printf("%d\n",n);
	} 
	return 0; 
}

