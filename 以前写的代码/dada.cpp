#include<stdio.h>
#include<string.h>
int main(){
	int t,y[33],n,a,i,j,k,l,flag,p;
	char x[33]={'0'};char e;
	scanf("%d",&t);
	while(t--){
		for(i=0;i<=32;i++)  y[i]=1;
		scanf("%s",x);
		//printf("%d\n",strlen(x));
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			scanf("%d",&a); 
			a=a-1;
			e=x[a];x[a]=x[a+1];x[a+1]=e;
			p=0;l=strlen(x); 
			if(x[a]==x[a+1]){
				for(j=a;j>=1;j--){
					if(x[j]!=x[j-1])  break;
				}
				flag=j;
				for(j=a+1;j<=l-2;j++){
					if(x[j]!=x[j+1])  break;
				}
				if(j-flag>=2){
					for(k=flag;k<=j;k++)  y[k]=0;
				}
			}
			else{
				for(j=a;j>=1;j--){
					if(x[j]!=x[j-1])  break;
				}
				if(a-j>=2){
					for(k=j;k<=a;k++)  y[k]=0;
				}
				for(j=a+1;j<=l-2;j++){
					if(x[j]!=x[j+1])  break;
				}
				if(j-a-1>=2){
					for(k=a+1;k<=j;k++)  y[k]=0;
				}
			}
			for(j=0;j<l;j++){
				if(y[j]){
					x[p]=x[j];
					p++;
				}
			}
			x[p]=0;
			if(p==0)  printf("Over\n");
			else{
				for(j=0;j<p;j++)  y[j]=1;
				puts(x);
			}
		}
		printf("\n");
	}
	return 0;
}
