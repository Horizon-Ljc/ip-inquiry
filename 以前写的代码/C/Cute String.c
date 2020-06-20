#include<stdio.h>
#include<string.h>
int main()
{
	char m[201];
	char n[27];
	char c;//记得初始化 
	int i,cnt1,cnt2,j; 
	while(gets(m)){
		c='a';
		for(i=0;i<26;i++){
			n[i]=c;
			c++;
		}
		cnt1=0;
		cnt2=0;
		for(i=0;i<strlen(m);i++){
			if(m[i]==' ')
			cnt1++;
			if(m[i]>='A'&&m[i]<='Z'){
				m[i]=m[i]+32;
			} 
			for(j=0;j<26;j++){
				if(m[i]==n[j]){
					cnt2++;
					n[j]='\0';
					break;
				}
			}
		}
	
		if(cnt1>=10||cnt2>10)
		printf("No\n");
		else
		printf("Yes\n");
	}
} //WA
