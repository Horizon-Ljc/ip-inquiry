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
}/* ������int64 longlong��ʱ�� unsigned long long ��WA���ܼ����ʱ����漰������
������typedef ����һ�� ll=int64 typedef long long ll Ϊʲô��int64����Ϊ����lcm a b  ��󷵻ص�ʱ���Ƿ���a*b/gcd (ab)
typedef ��#define �ȼ� define�Ļ��� 
#define ll long long
64Ϊ����һֱ��һ��û��ȷ���淶���������͡��ֽ������ı������У���64Ϊ���͵�֧��Ҳ�Ǳ�׼��һ����̬���졣һ����˵��64λ���͵Ķ��巽ʽ��long long��__int64����(VC��֧��_int64)�����������׼�����ʽ��printf(��%lld��,a)��printf(��%I64d��,a)����cout << a���ַ�ʽ��
������long long����__int64���������printf�������������printf("%I64d\n",a)��ʾ��ǧ������lld����lld�϶�������cout�Ͳ�����������ţ���Ҳ����Ϊʲô��cout��ac��ԭ��ͬ��������scanf�����Ҳ����lld����%I64d



