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
/*������int64..

���ĺ� 2019/10/17 12:16:26
longlong��ʱ��/��Ѫ

���ĺ� 2019/10/17 12:17:28
unsigned long long ��WA

���ĺ� 2019/10/17 12:17:48
���ܼ����ʱ����漰������
Int64���з��� 64 λ�����������ͣ��൱��C++�е�long long�� C# �е� long �� SQL Server �е� bigint����ʾֵ���� -2^63 ( -9,223,372,036,854,775,808) ��2^63-1(+9,223,372,036,854,775,807 )֮����������洢�ռ�ռ 8 �ֽڡ���������ֵ���ܳ��� int ��������֧�ַ�Χ�������
Int64 Ϊ�Ƚϴ����͵�ʵ������ʵ����ֵת��Ϊ�����ַ�����ʾ��ʽ�Լ������ֵ��ַ�����ʾ��ʽת��Ϊ�����͵�ʵ���ṩ����Ӧ�ķ�����
���� �� 32 λ Intel ������Ϸ��� 64 λֵ����ԭ�Ӳ��������ò��������̰߳�ȫ�ġ�����ζ�ţ����������ͬʱ��һ��ֵ�����һ����̬ Int64 �ֶΣ�����ֶε�����ֵ���޷�Ԥ��ġ�
�йظ�ʽ�淶������ο���ֵ���͵��ַ�����ʾ��ʽ����Ϣ����μ���ʽ��������������ʵ�ֽӿ� IComparable��IFormattable �� IConvertible��ʹ�� Convert �����ת����������ʹ�ô����͵� IConvertible ��ʽ�ӿڳ�Աʵ�֡�
�����÷�����������ʾ��
#include<stdio.h>
int main()
{
__int64 j;
scanf("%I64d",&j);
printf("%I64d",j);
}
˵����
1��int64��������Ϊѭ������
2��int64�Ĳ����ٶȽ���*/
