#include <stdio.h>
#define maxn  5000005
#define sqrt_maxn 2240 //�ڶ�������д��main�� 
int is_prime[maxn]={1,1};//0��1 
int cnt_prime[maxn]={0};//��Ӧ�������� 
int main(){
    int n,a,b,i,s,h;
    scanf("%d",&n);
    for(s=2;s<=sqrt_maxn;s++){//���ص�maxn ��sqrt    
//��������������Ϊ0 ��cntʱ������ 
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
}//��ǰԤ����1��5000000������������һ����һ���˷�ʱ�� 



