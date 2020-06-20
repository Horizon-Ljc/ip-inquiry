#include<stdio.h>
int main(){
	int t,n,i;
	scanf("%d",&t);
	char s[9];
	int x,y;
	while(t--){
		scanf("%d",&n);
		int a[4]={0,0,0,0};//四个方向
		int z=0;
		int l;
		for(i=0;i<n;i++){
			scanf("%s",s);
			if(s[0]=='L') z=(z+3)%4;
			else if(s[0]=='R') z=(z+1)%4;
			else if(s[0]=='B') z=(z+2)%4;
			else if(s[0]=='F'){
				scanf("%d",&l);
				a[z]+=l;
 
			}
			
		}
		x=a[1]-a[3];
		    y=a[0]-a[2];
		printf("%d %d\n",x,y);
 
	}
	return 0;
} //不知道做 

