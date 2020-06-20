#include<stdio.h>
#include<string.h>
int main()
{
char str1[101],str2[101];
int i,j;
int n;
scanf("%d",&n);
getchar();
while(n--)
{
int count = 0;
 gets(str1);

 int len = strlen(str1);
 for(j=0,i=len-1;i>=0;i--)
 {
str2[j++] = str1[i];
 }

for(i=0;i<len;i++)
{
if((str1[i]==str2[i])||(str1[i]-32==str2[i])||(str1[i]==str2[i]-32))
count++;
}
if(count == len)
printf("YES\n");
else
printf("NO\n");
}
}
