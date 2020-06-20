#include<stdio.h>
int main(){
	int a=5;
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
       	printf("%d",e);
}

	
