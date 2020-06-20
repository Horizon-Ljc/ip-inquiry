#include <stdio.h>
#include<math.h>
int main()
{
	int a,n,b,i,p,m,ret;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&a,&b);
		for(i=a;i<=b;i++){
			if(i<4){
				continue;
			}
			for(p=2;p<b;p++){
				ret=1
				for(m=2;m<p;m++){
					if(p%m==0){
						ret=0;
						break;
					}
					
				}
			}
		}
	}
	return 0;
}
