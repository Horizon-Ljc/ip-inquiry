#include<stdio.h>
int main()
{
    int m,k,a,i,b,c,cnt,h,isprime;
    scanf("%d",&k);
    while(k--){
        scanf("%d %d",&a,&b);
        c=a+b;
        h=c;
        cnt=0;
        out:
        for(i=2;i<=c;i++){
            isprime=1;
            for(m=2;m<i;m++){
                if(i%m==0){
                    isprime=0;
                }
            }
            if(isprime){
            	if(c*c==h){
                    cnt++;
                    c=c/i;
                    goto out;
                }
                if(c%i==0){
                if(c*c==h){
                    cnt++;
                    c=c/i;
                    break;
                }else{
                    cnt+=2;
                c=c/i;
                }
                
                goto out;
            }
            }
        
        } 
        printf("%d\n",cnt);
    }
    return 0; 
}//本质上是质因数分解 

