#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,cnt1,h,cnt2;
	char m[1001];
	scanf("%d",&n);
	while(n--){
		scanf("%s",m);
		cnt1=0;
		cnt2=0; 
		for(i=0;i<strlen(m)-1;i++){
			if(m[i]==m[i+1])
			cnt1++;
			else{
				h=i;
				break;
			}
			
		}
		if(cnt1!=0)
		cnt1++;
		if(cnt1%2!=0)
		cnt1=0;
		
		
		for(i=h+1;i<strlen(m)-1;i++){
			if(m[i]==m[i+1]){
				cnt2++;
			}			
			else{
				if(cnt2!=0)
				cnt2++;
				if(cnt2%2!=0)
				cnt2=0;
				if(cnt1>=cnt2){
					cnt2=0;
					continue;
				}
				else{
					cnt1=cnt2;
					cnt2=0;
					continue;
				}
			}
			if(m[strlen(m)-1]==m[strlen(m)-2]&&i==strlen(m)-2){
			
				cnt2++;
				if(cnt2%2!=0)
				cnt2=0;
				if(cnt1>=cnt2){
					cnt2=0;
					continue;
				}
				else{
					cnt1=cnt2;
					cnt2=0;
					continue;
				}
			}
		}
		if(cnt2>cnt1){	
			cnt1=cnt2;	
				}		
		printf("%d\n",cnt1);
	}
	return 0;
}//WA

