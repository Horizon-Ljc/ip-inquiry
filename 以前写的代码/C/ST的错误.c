#include<stdio.h>
typedef __int64 ll;// ll=int64
ll lcm(ll x,ll y);
int main()
{
    int k,n,i,d,b,c;
    ll min;
    ll a[50];
    scanf("%d",&k);
    while(k--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%I64d",&a[i]);
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
        
        
        printf("%I64d\n",min); 
    }
    return 0; 
}
ll lcm(ll x,ll y){
    ll a, b, c;
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
}/* 精度用int64 longlong超时了 unsigned long long 会WA可能计算的时候会涉及到负数
我用了typedef 简化了一下 ll=int64 typedef long long ll 为什么用int64是因为我求lcm a b  最后返回的时候是返回a*b/gcd (ab)
typedef 和#define 等价 define的话就 
#define ll long long
64为整型一直是一种没有确定规范的数据类型。现今主流的编译器中，对64为整型的支持也是标准不一，形态各异。一般来说，64位整型的定义方式有long long和__int64两种(VC还支持_int64)，而输出到标准输出方式有printf(“%lld”,a)，printf(“%I64d”,a)，和cout << a三种方式。
不论是long long还是__int64，如果你用printf输出，都必须用printf("%I64d\n",a)表示，千万不能用lld，用lld肯定错，你用cout就不会有这个困扰，这也就是为什么用cout能ac的原因。同理，建议你scanf最好你也别用lld，用%I64d



