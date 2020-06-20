#include<stdio.h>
int main(){
	int k,i,t;
	int x[4],y[4];
	scanf("%d",&k);
	while(k--){
		for(i=0;i<4;i++)
		scanf("%d %d",&x[i],&y[i]);
		if(x[0]>x[1]){
			t=x[0];
		x[0]=x[1];
		x[1]=t;
			t=y[0];
		y[0]=y[1];
		y[1]=t;
		}
			if(x[2]>x[3]){
			t=x[2];
		x[2]=x[3];
		x[3]=t;
			t=y[2];
		y[2]=y[3];
		y[3]=t;
		}		
		 
	
		 
		if(min(x[1],x[3])>max(x[0],x[2])&&min(y[1],y[3])>max(y[0],y[2]))
		printf("Yes\n");
		else
		printf("No\n");//buxie min and max
	}
	return 0;
}
int min(int a,int b){
	int x;
	if(a>=b)
	x=b;
	else
	x=a;
	return x;
} 
int max(int a,int b){
	int x;
	if(a>=b)
	x=a;
	else
	x=b;
	return x;
} 
