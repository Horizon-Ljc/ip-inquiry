#include<stdio.h>
#define N 20001
int m[N];
int main()
{
	int n,i,j,cnt;
	while(scanf("%d",&n),n){
		m[1]=1;
		cnt=0;
		for(i=1;;){
			if(m[1]==1&&cnt!=0){
				break;
			}
			if(i<=n){
				m[i]=0;
				i=2*i;
				m[i]=1;
				cnt++;
			}else{
				m[i]=0;
				i=2*(i-n)-1;
				m[i]=1;
				cnt++;
			}
		}
		printf("%d\n",cnt);
	}
}//只要看1 找规律 
