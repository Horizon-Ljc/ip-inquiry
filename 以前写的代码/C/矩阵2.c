#include<stdio.h>
#include<string.h>
#define N 10
int main()
{
	int a1[N][N],a2[N],a3[N][N],i,j;
	int k,z,t,g;
	int m,n,x,y,a,d;
	char c;
	scanf("%d",&k);
	while(k--){
		scanf("%d %d",&n,&m);
		for(i=0,a=1;i<n;i++){
			for(j=0;j<n;j++)
			a1[i][j]=a++;
		}
		scanf("%c %d %d",&c,&x,&y);
		g=y%n;
		d=n-g;
		x-=1;
		while(1){
			if(c=='R'){
				memmove(a2,a1[0]+x*N+d,g*sizeof(int));
				memmove(a1[0]+x*N+g,a1[0]+x*N,d*sizeof(int));
				memmove(a1[0]+x*N,a2,g*sizeof(int));
				
			}
			if(c=='L'){
				memmove(a2,a1[0]+x*N,g*sizeof(int));
				memmove(a1[0]+x*N,a1[0]+x*N+g,d*sizeof(int));
				memmove(a1[0]+x*N+d,a2,g*sizeof(int));
			}
			if(c=='U'){
				for(i=0;i<n;i++){
					for(j=0;j<n;j++){
						a3[i][j]=a1[j][i];
					}
				}
				memmove(a2,a3[0]+x*N,g*sizeof(int));
				memmove(a3[0]+x*N,a3[0]+x*N+g,d*sizeof(int));
				memmove(a3[0]+x*N+d,a2,g*sizeof(int));
				for(i=0;i<n;i++){
					for(j=0;j<n;j++){
						a1[i][j]=a3[j][i];
					}
				}
				break;
			}
			if(c=='D'){
				for(i=0;i<n;i++){
					for(j=0;j<n;j++){
						a3[i][j]=a1[j][i];
					}
				}
				memmove(a2,a3[0]+x*N+d,g*sizeof(int));
				memmove(a3[0]+x*N+g,a3[0]+x*N,d*sizeof(int));
				memmove(a3[0]+x*N,a2,g*sizeof(int));
				for(i=0;i<n;i++){
					for(j=0;j<n;j++){
						a1[i][j]=a3[j][i];
					}
				}
				break;
			}
			else{
				scanf("%c %d %d",&c,&x,&y);
				g=y%n;
				d=n-g;
				x-=1;
			}
			}
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					printf("%d ",a1[i][j]);
					if(i==n-1&&j==n-1)
					getchar();
				}
			}	
		}
	
	return 0;
}
