#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define N 3000001

int phi[N];
void init() {
    int i, j;
    for (i = 1; i < N; i++)
        phi[i] = i;
    for (i = 2; i < N; i++)
        if (i == phi[i]) 
            for (j = i; j < N; j += i) 
                phi[j] = (phi[j] / i) * (i - 1);
				
	for (i = 1; i <= N; i++)
        phi[i+1]+= phi[i];
}

int main() {
    init();
    int a, b;
    int t;
    scanf("%d",&t);
   	while(t--){
   		 scanf("%d%d", &a, &b);
        __int64 ans = 0;
        printf("%I64d\n",phi[b]-phi[a]);
    
	   }
    return 0;
}

	
