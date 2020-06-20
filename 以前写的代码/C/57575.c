#include<stdio.h>
typedef __int64 ll;
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
    long long a, b, c;
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
}
/*精度用int64..

王文海 2019/10/17 12:16:26
longlong超时了/喷血

王文海 2019/10/17 12:17:28
unsigned long long 会WA

王文海 2019/10/17 12:17:48
可能计算的时候会涉及到负数
Int64是有符号 64 位整数数据类型，相当于C++中的long long、 C# 中的 long 和 SQL Server 中的 bigint，表示值介于 -2^63 ( -9,223,372,036,854,775,808) 到2^63-1(+9,223,372,036,854,775,807 )之间的整数。存储空间占 8 字节。用于整数值可能超过 int 数据类型支持范围的情况。
Int64 为比较此类型的实例、将实例的值转换为它的字符串表示形式以及将数字的字符串表示形式转换为此类型的实例提供了相应的方法。
警告 在 32 位 Intel 计算机上分配 64 位值不是原子操作；即该操作不是线程安全的。这意味着，如果两个人同时将一个值分配给一个静态 Int64 字段，则该字段的最终值是无法预测的。
有关格式规范代码如何控制值类型的字符串表示形式的信息，请参见格式化概述。此类型实现接口 IComparable、IFormattable 和 IConvertible。使用 Convert 类进行转换，而不是使用此类型的 IConvertible 显式接口成员实现。
具体用法可以如下所示：
#include<stdio.h>
int main()
{
__int64 j;
scanf("%I64d",&j);
printf("%I64d",j);
}
说明：
1、int64不能用作为循环变量
2、int64的操作速度较慢*/
