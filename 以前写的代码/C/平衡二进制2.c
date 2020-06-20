#include <stdio.h>
#include<string.h>
int main()
{
    int transfer(int x);
    
    int x,n;
  
    scanf("%d",&n);
    while(n--){
	
    scanf("%d",&x);
    transfer(x);
    printf("\n");
}
	return 0;
}
int transfer(int x)
{
	char m[10000];
	int yushu;
	int i=0;
    if(x==0){
    printf("0");
    return 0;
	}
   
    if(x==1){
    printf("1");
    return 0;
	}
    
    do{
    	yushu=x%3;
    	x/=3;
    	if(yushu==0){
    		m[i]='0';
		}else if(yushu==1){
			m[i]='1';
		}
		
		else{
			m[i]='-';
			x+=1;
		}
		i++;
	}while(x!=0);
    for(i=strlen(m)-1;i>=0;i--)
    printf("%c",m[i]);
}

