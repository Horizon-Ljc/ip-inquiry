#include<stdio.h>
int main()
{
	int N,h,n,count1,count2,y,s;
	scanf("%d",&N);
	while(N--){
		count1=0;
		count2=0;
		scanf("%d",&n);
		y=n;
		do{
			h=y%2;
			if(h==1){
				count1++;
				y/=2;
			}
			else{
				y/=2;
				break;
			}	
		}while(y>0);
		out:
		do{
			h=y%2;
			if(h==1){
				count2++;
				y/=2;
			}
			else {
				if(count2>=count1){
					count1=count2;
					count2=0;
					goto out;
				}
				
			} 
		}while(h>0);
		printf("%d\n",count1);
	}
	return 0;
 } 
