#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,i,k,h;
	scanf("%d",&n);
	while(n--){
		k=0;
		scanf("%d",&m);
		h=sqrt(m);
		for(i=2;i<h;i++){
			if(h%i==0){
				k=1;
				break;
			}
			
		}
		if(k)
		printf("No\n");
		else
		printf("Yes\n");
	}
	return 0;
 } 
 //分解质因数 分解两个以上也是d prime 
