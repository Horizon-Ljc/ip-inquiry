#include<stdio.h>
#include<string.h>
#define n 200000
int a[n],b[n];
int compare(const void *a,const void*b){
	int *z=(int *)a;
	int *x=(int *)b;//注意 
	return *x-*z;
	//small big
}
int main(){
	int a1,b1;
	scanf("%d %d",&a1,&b1);
	int i;
	for(i=0;i<a1;i++){
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<b1;i++){
		scanf("%d",&b[i]);	
	}
	qsort(a,a1,sizeof(int),compare);
	qsort(b,b1,sizeof(int),compare);
	int j;
	for(i=0;i<b1;i++){
		int cnt=0;
		for(j=0;j<a1;j++){
			if(b[i]<=a[j])
			cnt++;
			else
			break;
		}
		printf("%d ",cnt);
	}
}//先从小到大枚举，不行再二分 
