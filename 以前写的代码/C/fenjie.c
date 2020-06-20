#include <stdio.h>
#include<math.h>
int main(){
	int n,i;          
	
	while(scanf("%d",&n)!=EOF&&n!=0){
	printf("%d=",n);
	for(i=2;i<=sqrt(n);i++){  
		for(;n!=i;)
        {
			if(n%i==0)
			{
				printf("%d*",i);
				n=n/i;
			}
            if(n%i) break;
		}
	}
	printf("%d\n",n);
	}
	return 0;
}

