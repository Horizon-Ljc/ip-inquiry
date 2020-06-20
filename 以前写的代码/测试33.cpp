#include<bits/stdc++.h>
#define MAXN 2270
#define MAXL 20000
using namespace std;
int prime[MAXN];
int check[MAXL];
int tot = 0;
int main()
{
for (int i = 2; i < MAXL; ++i)
{
    if(!check[i])prime[tot++] = i;
    for (int j = 0; j < tot; ++j)
    {
        if (i * prime[j] > MAXL)break;
        check[i*prime[j]] = 1;
        if (i % prime[j] == 0)break;
    }
}

	int n,i,j,h;
	scanf("%d",&n);
	for(i=0;;i++){
		for(j=0;;j++){
			for(h=0;;h++){
				if(prime[i]+prime[j]+prime[h]==n){
					printf("%d %d %d",prime[i],prime[j],prime[h]);
					goto out;
				}	
			}
		}
	}
	out:
		return 0;
} 
