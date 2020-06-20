#include<stdio.h>
int main()
{
	int n,N,i,j,m,c;
	int cnt=0;
	char a[20][201];
	scanf("%d",&n);
	while(n--){
		cnt++;
		scanf("%d",&N); 
		for(i=0;i<N;i++){
		scanf("%s",&a[i][0]);
		}
		printf("Case %d: ",cnt);
		for(j=0;;j++){
			for(m=0;m<(N-1);m++){
			c=1;
			if(a[m][j]!=a[m+1][j]){
			c=0;
			break;
		}		
		}	
		if(c){
			printf("%c",a[m][j]);
		}
		if(c==0)
			break;
		}
		printf("\n");
}
}
