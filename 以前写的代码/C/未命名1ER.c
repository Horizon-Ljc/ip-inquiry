#include<stdio.h>
#include<math.h>
int divisor(int a,int b) 
{
	if(b==0) return a;
	else     return divisor(b,a%b);
}
int main()
{
	int k;
	scanf("%d",&k);
	while(k--)
	{
		int a,b,c,d;
		int y,x1,x2,x;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		y=b*d;       
		x1=a*d-b*c; 
		x2=a*d+b*c; 
		if(x2%y==0)   
		{
			printf("%d ",x2/y);
		} 
		else
		{
			printf("%d/%d ",x2/(divisor(x2,y)),y/(divisor(x2,y)));
		}
		if(x1==0)            printf("0\n");    
		else if(x1>0)
	    {
               if(x1%y==0) 	 printf("%d\n",x1/y);
               else          printf("%d/%d\n",x1/(divisor(x1,y)),y/(divisor(x1,y)));
	    }
	    else
	    {
	    	   if((-x1)%y==0) printf("-%d\n",(-x1)/y);
	    	   else           printf("-%d/%d\n",(-x1)/(divisor(-x1,y)),y/(divisor(-x1,y)));
	    }
	}
	return 0;
}
