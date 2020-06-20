#include <stdio.h>
const int N=10;
int m[N][N];
 
int main(){
    int i,j,k,s=1,x,y,n,hang,lie;
    int dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    scanf("%d %d %d",&n,&hang,&lie);
    if(n%2) m[n/2][n/2] = n*n;
    for(i=0;i<n/2;i++){
        x = i;
        y = i;
        for(j=0;j<4;j++){
            for(k=0;k<n-1-2*i;k++){
                m[x][y] = s++;
                x += dir[j][0];
                y += dir[j][1];
            }
        }
    }
    printf("%d",m[hang-1][lie-1]); 
    return 0;
}   

