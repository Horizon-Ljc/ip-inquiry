#include<stdio.h>
int main()
{
int i,j,k,n;
char ch;
scanf("%d",&k);
while(k--)
{ 
getchar(); ？？？？？？？？为什么数字要，字符不要，可能是接连两个读取时要用 
scanf("%c",&ch);
n = ch-'A';
for(i=0;i<=n;i++) 
{
for(j=0;j<=n;j++)
{
printf(" ");
}
printf("%c",'A'+i);
printf("\n");
for(j=0;j<n-i;j++)
{
printf(" ");
}

for(j=0;j<2*i+3;j++)
{
printf("%c",'A'+i);
}
printf("\n"); 
}
}
}

