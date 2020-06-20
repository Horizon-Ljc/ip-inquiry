#include<stdio.h>
#include<string.h>
int main()
{
   char s1[51],s2[51];
  	int n;
   	scanf("%d",&n);
    scanf("%s",s1);
    int i,l=strlen(s1);
    for(i=0;i<l;i++){
    	s2[i]=(s1[i]+(n%26))%122;
    	printf("%c",s2[i]);
	}
    return 0;
}//97 122 
/*#include<stdio.h>
#include <string.h>
int main()
{
    int n;
	char a[100];
	scanf("%d",&n);
    scanf("%s",a);
	int lenth = strlen(a);
	if(n>26) n%=26; 
	int i;   
	for(i=0;i<lenth;i++)
	{
		if(a[i]+n>122) a[i]-=26;
		a[i]+=n;
	}
	for(i=0;i<lenth;i++)
	{
		printf("%c",a[i]);
	 } 
}*/

