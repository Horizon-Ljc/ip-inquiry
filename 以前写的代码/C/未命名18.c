#include<stdio.h>
int riqi(int year,int morth,int day)
{
 int i;
 int sumday=0;
 int a[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
int b = (year%4==0&&year%100!=0)||(year%400==0);
 for(i=0;i<morth-1;i++)
 {
sumday += a[b][i];
 }
 sumday=sumday+day;
 return sumday;
}
main()
{
 int a,b,c;
 int i,n;
 int sum=0;
scanf("%d",&n);
 while (n--)
 {
scanf("%d-%d-%d",&a,&b,&c);
sum= riqi(a,b,c);
 printf("%d\n",sum);
 }
}

