#include<stdio.h>
int main()
{
	int s=0,b;
	char c;
	scanf("%d ",&b);
	while(c=getchar(),c!='\n'){
		s=s*b;
		s+=c-'0';
	}
	printf("%d\n",s);
 } //进制转换 c的字符每次从第一个依次读入  
