#include<stdio.h>
int main()
{
	int k,a,s,m,b,i,x,geshu,h,ret;
	int n[500000];
	scanf("%d",&k);
	while(k--){
		s=0;
		geshu=0;
		scanf("%d %d",&a,&b);
		for(i=a;i<=b;i++){
			if(i==2||i==3){
				n[s]=i;
					s++;
			}else if(i==1){
				continue;
			}else{
				ret=1;
				for(x=2;x*x<=i;x+=1){
					if(i%x==0){
						ret=0;
					}	
				}
				if(ret){
					n[s]=i;
						s++;
				}
			}
		
			
		}	
		for(m=0;m<s;m++){
			if(n[m+1]-n[m]==2){
				geshu++;
			}
		}
		printf("%d\n",geshu);
	}
	return 0;
}//³¬Ê± 
