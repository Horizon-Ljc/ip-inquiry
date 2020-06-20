#include<stdio.h>
#include<string.h>
char str[10]="IVXLCDM";
int num[10]={1,5,10,50,100,500,1000};
int main()
{
	int i,k; 
 char s[101];
 while(scanf("%s",s)){
 
 int len=strlen(s);
 int cnt=0,a[20];
 for( i=0;i<len;i++)
{
 int f=0,t;
 if(s[i]==s[i+1]&&i!=len-1)
 {
 if(s[i]==s[i+2]&&i!=len-2)
 {
 f=2;
 }
 else
 f=1;
 }
 for( k=0;k<7;k++)
if(s[i]==str[k])
 { t=k;
 break;
 }
 a[cnt++]=num[t]*(f+1);
 i+=f;


 }
int sum=0;
 for(i=0;i<cnt;i++)
 sum+=a[i];


for(i=0;i<cnt-1;i++)
 {
 if(a[i]<a[i+1])sum-=2*a[i];
 }


 printf("%d\n",sum);
}
 return 0;
}

