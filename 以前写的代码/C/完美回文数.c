#include<stdio.h>
int main()
{
	int t,x,i,j,cnt1,cnt2;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&x);
		if(x%11){
			printf("0\n");
			
		} 
	else{
		j=x;
		cnt1=j/1001+j%1001/11;
		for(i=1;1111*i<=x;i++){
			j=x-1111*i;
			cnt2=i+j/1001+j%1001/11;
			if(cnt1>cnt2){
				cnt1=cnt2;
				
			}
		}
		
		printf("%d\n",cnt1);
	}
		
	}
	return 0;
} //多种情况取最小 

