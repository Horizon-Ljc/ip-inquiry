#include<stdio.h>
int mian()
{
	int a[1000000];
	int i,x,j,;
	for(i=0;i<1000000;i++){
		a[i]=0;
	}
	for(x=2;x<1000000;i++){
		if(a[x]){
			for(i=2;i*x<1000000;i++){//×ÐÏ¸¿´ 
				a[i*x]=0; 
			}
		}
	}
	for(i=2;i<1000000;i++){
		if(a[i]){
			a[i]=i;
		}
	}
	for(j=0;j<1000000;j++){
			if(Prime[j]>=a&&Prime[j]<=b)
			m++;
		}
		printf("%d\n",m);	
}
