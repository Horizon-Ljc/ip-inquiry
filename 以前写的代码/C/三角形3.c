#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        int num[101];
        int i,j;
        for(i=0;i<n;i++) scanf("%d",&num[i]);
        for(i=0;i<n-1;i++)
        {
        for( j=0;j<n-i-1;j++){
            num[j]=(num[j]+num[j+1])%2013;
        }
        }
        printf("%d\n",num[0]);
    }
    return 0;
}
