#include<bits/stdc++.h>
#define p 2013
using namespace std;
int main()
{
	int n,i;
	while(cin>>n,n){
		int a[101][101]={0};
		cin>>i;
		for(int k=0;k<i;k++){
			cin>>a[0][k];
		}
		for(int k=1;k<i;k++){
			for(int h=0;h<i-k;h++){
				a[k][h]=(a[k-1][h]+a[k-1][h+1])%p;
			}
		}
		cout<<a[i-1][0]<<endl;
	}
	return 0;
} 
