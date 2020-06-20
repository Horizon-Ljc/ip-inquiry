#include <stdio.h>
int main()
{
int i,j,z,n,r;
scanf("%d",&r);
n=(r-1)/2;
for(i=n+1;i>=0;i--){
for(j=i;j>=0;j--){
printf(" ");
}
for(z=2*n-2*i;z>=0;z--)
{
printf("*");
}
printf("\n");
}
for(i=n-1;i>=0;i--){
for(z=n-i;z>=0;z--){
printf(" ");
}
for(j=0;j<=2*i;j++){
printf("*");
}
printf("\n");
}
}
