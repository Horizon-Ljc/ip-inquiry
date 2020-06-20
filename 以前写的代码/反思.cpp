输入单个字符时 &
看预处理时的具体操作
while(t--)  for(i=1;i<=t;i++)
谢大回旋矩阵笔记
看二分法求根
#include<stdio.h>
#include<math.h>
#define z 1e-6
#define f(x) (a*(x)*(x)*(x)+b*(x)*(x)+c*(x)+d)
double a,b,c,d;
void ef(double s,double e)
{
	if(f(s)*f(e)<=0)
	{
		double mid=(s+e)/2.0;
		if(fabs(f(mid))<=1e-6)
		{
			printf("%.2f ",mid);
			return ;
		}
		if(f(mid)*f(s)<0)
		ef(s,mid);
		else
		ef(mid,e);
	}
}
 
int main()
{
	double s;
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	for(s=-101;s<=101;s+=1)
	{
		ef(s,s+1);
	}
	return 0;
}  
