#include<stdio.h>

#include<math.h>

#define N 10000001

int prime[N];

int main()

{

int i, j, num = 0;

for(i=2; i<N; i++)

 {for(j=2; j<=sqrt(i); j++)

 if( j%i==0 ) break;

 if( j>sqrt(i) ) prime[num++] = i;

}

for(i=2; i<10; i++) //由于输出将占用太多io时间，所以只输出2-100内的素数。可以把100改为N

 if( prime[i] )printf("%d ",i);



return 0;

}

