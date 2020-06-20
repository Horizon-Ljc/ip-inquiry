#include<stdio.h>
int main()
{
	int Prime[200000]={0};
	int n,a,b,i,j,cnt,h,m;
	scanf("%d",&n);
	while(n--){
		m=0;
		cnt=-1;
		h=0;
		scanf("%d %d",&a,&b);
		for(i=a;i<=b;i++){
			if(i==2){
				cnt++;
				Prime[cnt]=i;
				goto out;
			}
			if(i==3){
				cnt++;
				Prime[cnt]=i;
				goto out;
			}
			for(j=2;j*j<=i;j++){
				if(i%j==0){
				h=0;
				break;	
				}
				else{
				h=1; 
				}
			}
			out:		
			if(h){
				cnt++;
				Prime[cnt]=j;
			}
		
		}
		for(j=0;j<=cnt;j++){
			if(Prime[j]>=a&&Prime[j]<=b)
			m++;
		}
		printf("%d\n",m);	
	} 
}//Ã»¹ý 
