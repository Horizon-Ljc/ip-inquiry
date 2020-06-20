#include <stdio.h>
#define N 1000001
#define SQRT_N 1000
int a[N]={1,1};
	int g[N]={0};//为什么要写在这里 
int main(){
    int n,i,j,L,R;
    
    for(i=2;i<=SQRT_N;i++){
        if(!a[i]){
            for(j=i*i;j<N;j+=i) a[j] = 1;//起始j=i*i 
        }
    }
    for(i=1;i<N;i++) 
	g[i] = g[i-1] + !a[i];
   scanf("%d",&n);
   while(n--){
   
   
	
    scanf("%d %d",&L,&R);
        printf("%d\n",g[R]-g[L-1]);
}

    return 0;
}   

