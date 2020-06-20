#include<stdio.h>
int main()
{
    int a[34][34]={0};
    int n,i,j;
    while(scanf("%d",&n)) {
    	if(n<0)
    	return 0;
    	printf("2^%d=",n);
	
    
	for(i=0;i<=n;i++){
		a[i][0]=1; 
	}
	for(i=1;i<=n;i++){
	for(j=1;j<=i;j++){
	a[i][j]=a[i-1][j-1]+a[i-1][j];
	}
}
    for(i=0;i<=n;i++)
    if(i<=n-1)
    printf("%d+",a[n][i]);
    else
    printf("%d",a[n][i]);
    printf("\n");
}
	return 0;
}
