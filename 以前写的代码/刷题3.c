#include <stdio.h>
int main()
{
    char sym,temp[27][27];
    int i,j,m,k,n,l;//sym:大写字母对应数字A 1 m：从A开始的字符 
    while(scanf("%c",&sym)!=EOF)
    {
        for(i=0,m=65;i<sym-64;i++,m++)
        {
            for(j=0;j<i;j++){
                temp[i][j]=m;
                printf("%c",m);
            } 
            for(k=65+i;k<=sym;k++,j++) {
                temp[i][j]=k;
                printf("%c",k);
            }
            for(l=sym-66;l>=0;l--) printf("%c",temp[i][l]);
            printf("\n");
        }
        for(i=sym-66;i>=0;i--)
        {
            for(j=0;j<=sym-65;j++) printf("%c",temp[i][j]);
            for(j=sym-66;j>=0;j--) printf("%c",temp[i][j]);
            printf("\n");
        }
    }
    return 0;
}
