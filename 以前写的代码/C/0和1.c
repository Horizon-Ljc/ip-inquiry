#include<stdio.h>
 
 double fact(int a){
	if(a==0) return 1;
	return a*fact(a-1);
}
 
int main(){
	int k;
	scanf("%d",&k);
	while(k--){
		int n,m,x,y;
	double result=0;
		scanf("%d%d",&n,&m);
		x=(m+n)/2;
		y=(n-m)/2;
		if((x+y)==n)
			{
			result=fact(n)/(fact(x)*fact(y));
			
			}
		printf("%.0lf\n",result);
		}
		return 0;
}

