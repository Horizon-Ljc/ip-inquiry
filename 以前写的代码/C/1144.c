#include<stdio.h>
int main()
{
	int n;
    while(scanf("%d",&n)!=EOF){
    	n%=3;
        if(n==1||n==2)
            printf("\"even\"\n");
        else
            printf("\"odd\"\n");
}
    return 0;
}
