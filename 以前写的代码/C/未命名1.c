
#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,yes;
    char n[10];
    int m[15];//6 8 µÄÇé¿ö 
    scanf("%d",&t);
    while(t--){
        scanf("%s",n);
        yes=1;
        for(i=0;i<15;i++){
            m[i]=0;
        }
        for(i=0;i<strlen(n)-2;i++){
            if(((n[i]-'0')+(n[i+1]-'0'))%2==0){
                if(n[i]=='1'&&n[i+1]=='5'||n[i]=='5'&&n[i+1]=='1'||n[i]=='2'&&n[i+1]=='6'||n[i]=='6'&&n[i+1]=='2'||n[i]=='4'&&n[i+1]=='8'||n[i]=='8'&&n[i+1]=='4'||n[i]=='5'&&n[i+1]=='9'||n[i]=='9'&&n[i+1]=='5'||n[i]=='2'&&n[i+1]=='4'||n[i]=='4'&&n[i+1]=='2'||n[i]=='3'&&n[i+1]=='5'||n[i]=='5'&&n[i+1]=='3'||n[i]=='7'&&n[i+1]=='5'||n[i]=='5'&&n[i+1]=='7'||n[i]=='6'&&n[i+1]=='8'||n[i]=='8'&&n[i+1]=='6'){
                    continue;
                } 
                j=(n[i]-'0'+n[i+1]-'0')/2;
                m[i]=j;
                }
               
            
        }
        for(i=2;i<strlen(n);i++){
            for(j=0;j<strlen(n)-2;j++){
                if((n[i]-'0')==m[j]){
                    yes=0;
                    break;
                }
            }
        }
        if(yes)
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}
//124563987
