#include<stdio.h>
unsigned long long cnt[3000001]={0};
void oula(int a);
int main()
{
	  	int t,i;
		for(i=2;i<=3000001;i++){
			oula(i);
		}
		for(i=2;i<=3000001;i++){
			cnt[i]+=cnt[i-1];
		}
		
		scanf("%d",&t);
		while(t--){
			int a,b;
			scanf("%d %d",&a,&b);
			if(a==b) printf("%I64d\n",cnt[b]);
			else printf("%I64d\n",cnt[b]-cnt[a]+1);
	}
}
void oula(int a){
	unsigned long long b=1;
	unsigned long long c=a;
	unsigned long long f=1;
	unsigned long long i,e;
        for(i=2;i*i<=a;i++)
        {
            if(a%i==0)
            {
                b*=i-1;
                f*=i;
                while(a%i==0)
                {
                    a=a/i;
                }
            }
        }
        if(a>1)
        {
            b*=a-1;
            f*=a;
        }
        e=(c*b)/f;
        cnt[c]=e;
}


        
