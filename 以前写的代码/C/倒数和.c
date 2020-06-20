#include <stdio.h>//ab之差小于等于10 
int gcd(int j,int k);
int main()
{
	int m,x,y;
	unsigned long long a;
	unsigned long long b;
	unsigned long long t;
	scanf("%d",&m); 

	while(m--){
		scanf("%d %d",&x,&y);
		if(x == y)
			printf("1/%d\n",x);
		else{
			a = 1;
			b = x;
			for(x++; x <= y; x++){
				a = a * x + b;
				b = b * x;
				t = gcd(a, b);
				a /= t;
				b /= t;
			}
			t = gcd(a, b);
			
			printf("%I64d/%I64d\n", a / t, b / t);
			
			
		}//else这里的算法？ 
	}
	return 0;
}
int gcd(int j,int k){
	int a,b,m;
	b=k;
	a=j;//b>a
	while(1){
		if(a!=0){
	m=a;
	a=b%a;
	b=m;
		}
		else
		break;
	}
	return b; 
}//35 44 
