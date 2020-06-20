#include<stdio.h>
#include<math.h>
int main(){
 int h,n;
 while(scanf("%d",&n)){
 getchar();
 if(n==0)
 return 0;
 if(n==1)
 printf("No\n");
 if(n==2||n==3)
 printf("Yes\n"); 
 for(h=2;h<=sqrt(n);h+=1){
	if(n%h==0)
	printf("No\n");
	else	
	printf("Yes\n");
    break;
}
}
}
 

