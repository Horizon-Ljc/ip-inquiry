#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	while(n--){
		int k,cir1[6],is=1;
		scanf("%d",&k);
		for(int i=1;i<=k;i++){
			scanf("%d",&cir1[i]);
		}
		for(int i=1;i<=k;i++){
			if(cir1[i]!=0) is=0;
		}
		if(is) printf("0\n");
		else{

			int fir,b;
			for(b=1;b<=1000;b++){
				while(!is){//out 0
				fir=cir1[1];
				for(int i=1;i<=k;i++){

					cir1[i]=abs(cir1[(i+1)%i]-cir1[i]);

				}
				for(int i=1;i<=k;i++){
					if(cir1[i]==0){
							is=0;

						}else{
							is=1;
							break;
						}
					}
				}
			}
			if(b<=1000&&is==0) printf("%d\n",b);
			else printf("Impossible\n");
		}
	}
 }
