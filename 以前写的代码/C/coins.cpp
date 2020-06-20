#include<bits/stdc++.h>
using namespace std;
int N1[42],N2[42];
int main(){
	int n;
	int i;
	while(scanf("%d",&n)&&n){
		N1[1]=1;
		N2[1]=1;
	    for(i=2;i<=n;i++){
	    	N1[i]=N2[i-1];
	    	N2[i]=N1[i-1]+N2[i-1];
	    }
	    printf("%d\n",N1[n]+N2[n]);
	}
return 0;
}

