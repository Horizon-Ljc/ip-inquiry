#include<stdio.h>
unsigned long long lcm(unsigned long long x,unsigned long long y);
int main()
{
    int k,n,i,d,b,c;
    unsigned long long min;
    unsigned long long a[50];
    scanf("%d",&k);
    while(k--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%llu",&a[i]);
        }
        min=lcm(lcm(a[0],a[1]),a[2]);
            for(d=0;d<=n-3;d++){
            for(b=d+1;b<=n-2;b++){
                for(c=b+1;c<=n-1;c++){
                    if(min>lcm(lcm(a[d],a[b]),a[c]))
                    min=lcm(lcm(a[d],a[b]),a[c]);
                }
            }
        }
        
        
        printf("%llu\n",min); 
    }
    return 0; 
}
unsigned long long lcm(unsigned long long x,unsigned long long y){
    unsigned long long a, b, c;
    a = x;
    b = y;
    c = x%y;
    while(c!=0)
   {
    x = y;
    y = c;
    c = x%y;
  }
  return a*b/y;
}/*��������  ���� �ӽ�10��6�η����� ����С������ �ᱬ���� ���Ҵ���������Ӧ����unsigned long long


Ҫ��Ӧ����  */ 



