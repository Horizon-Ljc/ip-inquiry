#include <stdio.h>
#include<string.h>
#include<math.h>
int sb(char a,int b,char c,int d);
int sb(char a,int b,char c,int d){
	int sum1,sum2,count,ret,i;
	sum1=0;
   	sum2=0;
   	count=0;
   	for(i=0;i<(sizeof(a)/sizeof(a[0]));i++){//ÎªÊ²Ã´´íÁËÑ½ 
   		if(a[i]<'A'-55){
		   	sum1+=pow(b,strlen(a)-1-count)*a[i];
		   	count++;
		   }
		if(a[i]<='Z'-55){
		   	sum1+=pow(b,strlen(a)-1-count)*a[i];
		   	count++;   
	   }
	   if(a[i]<='z'-61){
		   	sum1+=pow(b,strlen(a)-1-count)*a[i];
		   	count++;
   } 
   count=0;
}
	for(i=0;i<;i++){
   		if(a[i]<'A'-55){
		   	sum2+=pow(b,strlen(a)-1-count)*a[i];
		   	count++;
		   }
		if(a[i]<='Z'-55){
		   	sum2+=pow(b,strlen(a)-1-count)*a[i];
		   	count++;   
	   }
	   if(a[i]<='z'-61){
		   	sum2+=pow(b,strlen(a)-1-count)*a[i];
		   	count++;
   } 
   
}
	ret=sum1+sum2;
	return ret;
}
int main(){
   int n,b,d;
   char a[11];
   char c[11];
   scanf("%d",&n);
   while(n--){
   	scanf("%s %d %s %d",&a,&b,&c,&d);
   printf("%d\n",sb(a,b,c,d));
}
}

