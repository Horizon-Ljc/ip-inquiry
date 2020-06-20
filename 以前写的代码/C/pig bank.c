#include<stdio.h>
int main()
{
	int n,a,b,c,d;
	scanf("%d",&n);
	while(n--){
		d=0;
		scanf("%d %d %d",&a,&b,&c);
		if(a+b*d>=c){
			printf("0\n");
			continue;
		}
		while(a+b*d<=c){
			if(a+b*(d+1)>=c){
				d++;
				break;
			}
			d++;
		}
		printf("%d\n",d);
		
	}
	return 0;
 } 
