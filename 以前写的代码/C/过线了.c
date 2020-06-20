#include<stdio.h>
int main()
{
 int i,total,avg,singer;
 int n;
 int sum=0;
 int a[11];
 scanf("%d",&n);
 while(n--)
{ 
 scanf("%d %d %d",&total,&avg,&singer);
 for(i=0;i<total;i++)
 scanf("%d",&a[i]);
 for(i=0;i<total;i++)
{
 sum+=a[i];
 if(a[i]<singer) 
printf("No\n");
break;
 }
 }
 if(i==total)
 {
 if(total*avg<sum) 
 printf("Yes\n");
 else printf("No\n");
 sum=0;
}
}


