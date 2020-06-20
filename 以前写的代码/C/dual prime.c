#include<stdio.h>
#define N 1000001
#define M 500001
#define SQRT_M 708
int prime[M]={1,1};
int num[N]={0};
void makeprime()
{
    int i,j,k;
    for(i=2;i<=SQRT_M;i++)
        if(!prime[i])
            for(j=i*i;j<=M;j+=i) 
                prime[j]=1;    
    for(i=2,k=6;i<N;i++)
    {
        for(j=i+1;j<=N/i;j++)
            num[i*j]+=(!prime[i]&&!prime[j]);
        num[k]+=num[k-1];
        k++;
    }    
}
int main()
{
    makeprime();
    int K;
    scanf("%d",&K);
    while(K--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            int temp=a;a=b;b=temp;
        }
        printf("%d\n",num[b]-num[a-1]);
    }
}
//dual primeËØÊı´ò±í 
