#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n,m,cnt=0;
    
	scanf("%d %d",&n,&m);
	
	do{
	char s1[101],s2[101];
	itoa(m,s1,n);
	int i=0,len=strlen(s1);
	int l=len-1;
	for(;i<len;i++,l--){
		s2[l]=s1[i];
	}
	
	m=atoi(s1)+atoi(s2);
	cnt++;
	}while(huiwen(m));
	
	printf("STEP=%d",cnt);	

	return 0;
}
int huiwen(int x){
	char s[101];
	itoa(x,s,10);
	int i,l=strlen(s)-1,is=1;
	for(i=0;i<l;i++,l--){
		if(s[i]!=s[l]){
			is=0;
			break;
		}
	}
	if(is)
	return 0;
	return 1;
} 
