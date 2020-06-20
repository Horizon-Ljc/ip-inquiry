#include<stdio.h>
#include<math.h> 
int main(){
 	int n,a,b,i,isPrime;
 	int count=0;
 	scanf("%d",&n);
 	while(n--){
 		scanf("%d %d",&a,&b);
 		for(;a<=b;a++){
 			isPrime=1;
 			if(a==0||a==4||a==6||a==8)
 			isPrime=0;
 			for(i=3;i<sqrt(a);i++){
 				if(a%i==0){
 					isPrime=0;
 					break;
				 }
				 }
			 if(isPrime){
			 	count++;
			 }
		 } 
		 printf("%d\n",count);
		 count=0;
	 }
}

