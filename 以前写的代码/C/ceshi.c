#include<stdio.h>
int main()
{
    int n,i,isprime;
    long m;
    scanf("%d",&n);
    while(n--){
        scanf("%ld",&m);
        i=1;
        isprime=1;
        while(m/i>=10){
            i*=10;    
        }
        while(m>9){
            m%=i;
            if(m<i&&m>(i/10)){
            }
            else{
                isprime=0;
                goto out;
            }
            i/=10;
            for(i=2;i*i<m;i++){
                if(m%i==0){
                    isprime=0;
                    goto out;
                }
            }
        }
        out:
        if(isprime)
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}

