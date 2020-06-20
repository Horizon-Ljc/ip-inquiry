#include<cstdio>
#include<cmath>
#include<time.h>

#define MAXN 1e7

using namespace std;

double f1(int n,double a[],double x);
double f2(int n,double a[],double x);

double p;
double a[10];

int main()
{
	clock_t start,stop;

	double duration;

	for(int i=0;i<10;i++){
		a[i]=i;
	}

	start=clock();
	for(int i=0;i<MAXN;i++){
		f1(10,a,1.1);
	}
	stop=clock();

	duration=((double)(stop-start))/CLK_TCK;
	printf("ticks1=%f\n",(double)stop-start);
	printf("duration1=%f\n",duration);


	start=clock();
	for(int i=0;i<MAXN;i++){
		f2(10,a,1.1);
	}
	stop=clock();

	duration=((double)(stop-start))/CLK_TCK;
	printf("ticks2=%f\n",(double)stop-start);
	printf("duration2=%f\n",duration);


	return 0;
}

double f1(int n,double a[],double x){
	p=a[0];
	for(int i=1;i<n;i++){
		p+=pow(x,i)*a[i];
	}
	return p;
}

double f2(int n,double a[],double x){
	p=a[n];
	for(int i=n;i>0;i--){
		p=a[i-1]+x*p;
	}
	return p;
}
