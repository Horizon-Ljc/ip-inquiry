#include<stdio.h>
int main()
{
	int n,a,b,x,ans,p,i;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&a,&b);
		x=a+b;
		p=1;
		 for(i = 2; ; i++){
            ans = 0;
            while(x % i == 0){
                ++ans;
                x /= i;
            }
            p*=(ans+1);
            if(x==1)
            break;
        }
       printf("%d\n",p);
	}
	return 0;
 } 
