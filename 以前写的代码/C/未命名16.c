#include<stdio.h>
int main(){
	int selectsort(int n,int a[])
{
int i,k,j;
int temp;
for(i=0;i<n-1;i++)
{
 k=i;
 for(j=i+1;j<n;j++)
 {
 if(a[k]<a[j])
 k=j;
 }
 if(k!=i)
 {
 temp = a[i];
 a[i] = a[k];
 a[k] = temp; }
}
}

} 

