#include<stdio.h> 
int main(){
    int i,n,cnt=0;
	char a[30]={0};
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
        scanf("%c\n",&a[i]);
    for(i=0;i<n;i++)
        if(a[i]!=a[i+1]) cnt++;
    printf("%d",cnt+1);
    return 0;
}
