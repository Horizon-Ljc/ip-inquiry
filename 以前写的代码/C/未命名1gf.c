#include<stdio.h>
int main()
{
int t,b;
while(scanf("%d",&b)!=EOF)
{
int a=0;
for(t=0;t<32;t++)
{
if(b&1)
a++;
b=b>>1;
}
printf("%d\n",a);
}
}

