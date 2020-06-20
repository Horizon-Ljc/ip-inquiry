#include<stdio.h>

int main()
{
int s;
int a[100][100],b[100][100];
int n,k1,k2,m;
int i,j;
int g; 
scanf("%d",&s);
while(s--)
{
int c[100][100] = {0};
scanf("%d%d",&n,&k1);
for(i=0;i<n;i++)
{
for(j=0;j<k1;j++)
{
scanf("%d",&a[i][j]);
}
}

scanf("%d%d",&k2,&m);
for(i=0;i<k2;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&b[i][j]);
}
}

 for(i=0;i<n;i++)
 {
for(j=0;j<m;j++)
{
for( g=0;g<k2;g++)
{
c[i][j]+=a[i][g]*b[g][j];
}
}
 }

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d",c[i][j]);
if(j<m-1) 
{
printf(" ");
}
}
printf("\n");
}
}
}

