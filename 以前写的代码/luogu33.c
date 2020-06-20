#include <stdio.h>
#include <string.h>
int x[5007],y[5007];
int main()
{
	int n,s;
	scanf("%d %d",&n,&s);
	int a,b;
	scanf("%d %d",&a,&b);
	int i=1;
	for(;i<=n;i++){
		scanf("%d %d",&x[i],&y[i]); 
	}
	int j,t1,t2;
	int ans=0;
	for(i=1;i<n;i++){
		for(j=i+1;j<=n;j++){
			if(y[i]>y[j]){
				t1=x[i];
				t2=y[i];
				x[i]=x[j];
				y[i]=y[j];
				x[i]=t1;
				y[j]=t2;	
			}
		}
	}
	for(i=1;i<=n;i++){
		if(x[i]<=(a+b)&&y[i]<=s){
			ans++;
			s-=y[i];
		}
	}
	printf("%d",ans);
	return 0;
}
/* 贪心算法 圣诞老人的礼物 二维数组的psort排序？*/
