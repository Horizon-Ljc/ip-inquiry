#include<stdio.h>
#include<math.h>
int main()
{
int n,i,j,k=1;
while(scanf("%d",&n)){

for(i=2;i<=sqrt(n);i++)
{
j=0;
if(n%i==0)
{if(k)k=0;
else printf("*");
printf("%ld",i);
while(n%i==0)
{j++;n/=i;}
if(j>1)printf("^%ld",j);
}
}
if(n>1)
if(k)printf("%ld",n);
else printf("*%ld",n);
printf("\n");
getch(); 
}
return 0;

}
