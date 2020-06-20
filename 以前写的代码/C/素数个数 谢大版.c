#include <stdio.h>
#define N 1000001
#define SQRT_N 1000
 
int a[N]={1,1};
int g[N]={0};//int [1000001]¿ª²»ÁË 
 
int main(){
    int i,j,L,R;
    //get all primes by O(NloglogN) sieve algorithm 
    for(i=2;i<=SQRT_N;i++){
        if(!a[i]){
            for(j=i*i;j<N;j+=i) a[j] = 1;
        }
    }
    for(i=1;i<N;i++) g[i] = g[i-1] + !a[i];
     
    while(scanf("%d %d",&L,&R)==2){
        printf("%d\n",g[R]-g[L-1]);
    }
    return 0;
}   
