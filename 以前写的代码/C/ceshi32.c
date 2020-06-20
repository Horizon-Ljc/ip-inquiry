#include <stdio.h>
#define maxn  5000005
#define sqrt_maxn 2240 //第二三四行写在main外 
int is_prime[maxn]={1,1};//0和1 
int cnt_prime[maxn]={0};//对应输入数字 
int main(){
    int n,a,b,i,s,h;
    scanf("%d",&n);
    for(s=2;s<=sqrt_maxn;s++){//不必到maxn 到sqrt    
//反过来是素数的为0 求cnt时！即可 
            if(!is_prime[s]){
                for(h=2;h*s<=maxn;h++){
                    is_prime[h*s]=1;
            }
            } 
        }
        for(i=1;i<maxn;i++) cnt_prime[i] = cnt_prime[i-1] + (!is_prime[i]+!is_prime[i-2])/2;
    while(n--){
    
       
        
         scanf("%d %d",&a,&b);
        printf("%d\n",cnt_prime[b]-cnt_prime[a+1]);
    }
    return 0;
}//提前预处理1到5000000的素数，输入一次求一次浪费时间 



