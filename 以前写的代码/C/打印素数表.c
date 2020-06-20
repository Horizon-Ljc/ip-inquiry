#include <stdio.h>
#define N 1000001
#define SQRT_N 1000
int a[N]={1,1};
int cnt;
int prime[N];
 
int main(){
    int i,j;
    //get all primes by O(NloglogN) sieve algorithm 
    for(i=2;i<=SQRT_N;i++){
        if(!a[i]){
            for(j=i*i;j<N;j+=i) a[j] = 1;
        }
    }
    for(i=2;i<N;i++) if(!a[i]) prime[cnt++] = i;
    //print all primes between 1 and N, 10 primes per line.
    for(i=0;i<cnt;i++){
        printf("%d",prime[i]);
        if((i+1)%10==0 || i==cnt-1) putchar('\n');
        else putchar(' ');
    }
} 

