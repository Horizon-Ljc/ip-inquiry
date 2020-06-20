#include<stdio.h>
#include<string.h>
#define N 10;
int main()
{
	int n,a,b,c,d;
	int w[N][N],w1[N],w2;
	int i,j,b;
	char m;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&a,&b);
		scanf("%c %d %d",&m,&c,&d);
		for(i=0,b=1;i<n;i++){
			for(j=0;j<n;j++){
				w[i][j]=b++;
				
			}
		}
		
	}
}
