#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a,b;
    double c,d,f,g;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a!=b)
        {
        f=fabs(a*a-b*b),g=a*a+b*b;
        c=sqrt(f),d=sqrt(g);
        if(c-(int)c==0)printf("%d\n",(int)c);
        if((c-(int)c!=0)&&(d-(int)d==0))printf("%d\n",(int)d);
        if((c-(int)c!=0)&&(d-(int)d!=0))printf("None\n");
        }
        if(a==b)printf("None\n");
    }
    return 0;
}//Ç¿ÖÆ×ª»» 

