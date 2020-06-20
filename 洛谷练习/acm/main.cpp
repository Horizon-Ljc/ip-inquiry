#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_IMT 100000000
#define M 750
int prim(int w[][M],int n,int v,int tree[][3]){
 int i,j,k,p,min,c;
 int lowcost[M],closest[M];
 for(i=0;i<n;i++){
  closest[i]=v;
  lowcost[i]=w[v][i];
 }
 c=0;p=0;
 for(i=0;i<n-1;i++){
  min=MAX_IMT;
  for(j=0;j<n;j++)
   if(lowcost[j]!=-1 && lowcost[j]<min){
    min=lowcost[j];
    k=j;
   }
  tree[p][0]=closest[k];
  tree[p][1]=k;
  tree[p][2]=min;p++;
  c+=min;
  lowcost[k]=-1;
  for(j=0;j<n;j++)
   if(w[k][j]!=-1 && w[k][j]<lowcost[j]){
    lowcost[j]=w[k][j];
    closest[j]=k;
   }
 }
 return c;
}
int process(){
 int town[M][2],n=0,m=0,i=0,j=0,tempa=0,tempb=0;
 int w[M][M],MST[M-1][3];
 scanf("%d",&n);
 for(i=0;i<=n-1;i++)
  scanf("%d %d",&town[i][0],&town[i][1]);
 for(i=0;i<=n-1;i++)
  for(j=0;j<=n-1;j++){
    if(i==j)w[i][j]=-1;
    else w[i][j]=(town[i][0]-town[j][0])*(town[i][0]-town[j][0])+(town[i][1]-town[j][1])*(town[i][1]-town[j][1]);
    }
 scanf("%d",&m);
 for(j=0;j<=m-1;j++){
  scanf("%d %d",&tempa,&tempb);
  w[tempa-1][tempb-1]=0;
  w[tempb-1][tempa-1]=0;
 }
 
 prim(w,n,0,MST);
 for(i=0;i<=n-2;i++)
  if(MST[i][2]>0)
   printf("%d %d/n",MST[i][0]+1,MST[i][1]+1);
 return 0;
}
int main(){
 int cn,i;
 scanf("%d",&cn);
 for(i=0;i<cn;i++){
   process();
   if(i<cn-1)printf("/n");
  }
}
