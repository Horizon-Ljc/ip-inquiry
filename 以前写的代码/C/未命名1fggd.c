#include<stdio.h>

#include<math.h>

#define N 10000001

int prime[N];

int main()

{

int i, j, num = 0;

for(i=2; i<N; i++)

 {for(j=2; j<=sqrt(i); j++)

 if( j%i==0 ) break;

 if( j>sqrt(i) ) prime[num++] = i;

}

for(i=2; i<10; i++) //���������ռ��̫��ioʱ�䣬����ֻ���2-100�ڵ����������԰�100��ΪN

 if( prime[i] )printf("%d ",i);



return 0;

}

