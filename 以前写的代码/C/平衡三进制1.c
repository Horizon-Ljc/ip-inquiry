#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,h,cnt;
	char m[100];
	int m1[100];
	scanf("%d",&n);
	while(n--){
		scanf("%s",&m);
		getchar();
		h=0;
		cnt=0;
		for(i=strlen(m)-1;i>=0;i--){
			if(m[i]=='1'){
			m1[i]=m[i]-'1'+1;	
			}
			if(m[i]=='0'){
			m1[i]=m[i]-'0'+0;	
			}
			if(m[i]=='-'){
			m1[i]=m[i]-'-'-1;	
			}
			h+=m1[i]*pow(3,cnt);//笔记中要求简便运算 
			cnt++;
		}
		printf("%d\n",h);
	}
	return 0;
 } 
