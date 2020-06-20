#include<stdio.h>
#include<math.h>
int main(){
	int k,i;
	int x[4],y[4];
	double x1,x2,y1,y2,s1,s2,x3,y3;
	scanf("%d",&k);
	while(k--){
		for(i=0;i<4;i++)
		 scanf("%d %d",&x[i],&y[i]);
		x1=(x[1]+x[0])/2;
		x2=(x[3]+x[2])/2;
		y1=(y[1]+y[0])/2;
		y2=(y[3]+y[2])/2;
		s1=abs(x[1]-x[0])+abs(x[3]-x[2]);
		s2=abs(y[1]-y[0])+abs(y[3]-y[2]);
		if (abs(x1-x2)<s1/2&&abs(y1-y2)<s2/2)
		printf("Yes\n");
	    else printf("No\n");
	}
	return 0;
} //不知道为什么错了 
