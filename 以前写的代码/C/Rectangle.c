#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,b,c,d,e,f,g,h;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d %d %d",&a,&b,&c,&d);//数组输入时要用&？以及 
		scanf("%d %d %d %d",&e,&f,&g,&h);
		if(abs((c-a)-(g-e))<(c-a+g-h)/2&&abs((d-b)-(h-f))<(d-b+h-f)/2)
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}
